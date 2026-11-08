#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001a920c
// Address: 0x1a920c - 0x1a927c
void entry_001a920c_0x1a920c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a920c_0x1a920c");
#endif

    switch (ctx->pc) {
        case 0x1a9270u: goto label_1a9270;
        default: break;
    }

    ctx->pc = 0x1a920cu;

    // 0x1a920c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1a920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1a9210: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a9210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a9214: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a9214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9218: 0x8e820af0  lw          $v0, 0xAF0($s4)
    ctx->pc = 0x1a9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2800)));
    // 0x1a921c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a921cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a9220: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a9224: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a9228: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a922c: 0x0  nop
    ctx->pc = 0x1a922cu;
    // NOP
    // 0x1a9230: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1a9230u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a9234: 0x0  nop
    ctx->pc = 0x1a9234u;
    // NOP
    // 0x1a9238: 0x0  nop
    ctx->pc = 0x1a9238u;
    // NOP
    // 0x1a923c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a923cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a9240: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A9240u;
    {
        const bool branch_taken_0x1a9240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9240) {
            ctx->pc = 0x1A927Cu;
            return;
        }
    }
    ctx->pc = 0x1A9248u;
    // 0x1a9248: 0x8e820aec  lw          $v0, 0xAEC($s4)
    ctx->pc = 0x1a9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2796)));
    // 0x1a924c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A924Cu;
    {
        const bool branch_taken_0x1a924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a924c) {
            ctx->pc = 0x1A927Cu;
            return;
        }
    }
    ctx->pc = 0x1A9254u;
    // 0x1a9254: 0x8e830ae4  lw          $v1, 0xAE4($s4)
    ctx->pc = 0x1a9254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2788)));
    // 0x1a9258: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a925c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a925cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9260: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9264: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a9268: 0xc042118  jal         func_108460
    ctx->pc = 0x1A9268u;
    SET_GPR_U32(ctx, 31, 0x1A9270u);
    ctx->pc = 0x1A926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9268u;
    // 0x1a926c: 0x8e850ae8  lw          $a1, 0xAE8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1A9268u, 0x1A9270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9270u;
label_1a9270:
    // 0x1a9270: 0x8e820aec  lw          $v0, 0xAEC($s4)
    ctx->pc = 0x1a9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2796)));
    // 0x1a9274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9278: 0xae820aec  sw          $v0, 0xAEC($s4)
    ctx->pc = 0x1a9278u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2796), GPR_U32(ctx, 2));
    ctx->pc = 0x1a927cu;
}
