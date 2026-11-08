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

// Function: entry_0019c1fc
// Address: 0x19c1fc - 0x19c288
void entry_0019c1fc_0x19c1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c1fc_0x19c1fc");
#endif

    switch (ctx->pc) {
        case 0x19c214u: goto label_19c214;
        case 0x19c244u: goto label_19c244;
        case 0x19c284u: goto label_19c284;
        default: break;
    }

    ctx->pc = 0x19c1fcu;

    // 0x19c1fc: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x19c1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x19c200: 0x8e270920  lw          $a3, 0x920($s1)
    ctx->pc = 0x19c200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2336)));
    // 0x19c204: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x19c204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c208: 0x8e280910  lw          $t0, 0x910($s1)
    ctx->pc = 0x19c208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
    // 0x19c20c: 0xc0696c4  jal         func_1A5B10
    ctx->pc = 0x19C20Cu;
    SET_GPR_U32(ctx, 31, 0x19C214u);
    ctx->pc = 0x19C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C20Cu;
    // 0x19c210: 0x26240ac0  addiu       $a0, $s1, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5B10u, 0x19C20Cu, 0x19C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C214u;
label_19c214:
    // 0x19c214: 0x8e250910  lw          $a1, 0x910($s1)
    ctx->pc = 0x19c214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
    // 0x19c218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c21c: 0x8e220920  lw          $v0, 0x920($s1)
    ctx->pc = 0x19c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2336)));
    // 0x19c220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c228: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x19c22c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19c230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c234: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19c238: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c23c: 0xc064b08  jal         func_192C20
    ctx->pc = 0x19C23Cu;
    SET_GPR_U32(ctx, 31, 0x19C244u);
    ctx->pc = 0x19C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C23Cu;
    // 0x19c240: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x19C23Cu, 0x19C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C244u;
label_19c244:
    // 0x19c244: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c248: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c24c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c250: 0x0  nop
    ctx->pc = 0x19c250u;
    // NOP
    // 0x19c254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19c25c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c25cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19c260: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19c260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19c264: 0x0  nop
    ctx->pc = 0x19c264u;
    // NOP
    // 0x19c268: 0xae220934  sw          $v0, 0x934($s1)
    ctx->pc = 0x19c268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2356), GPR_U32(ctx, 2));
    // 0x19c26c: 0x8e22093c  lw          $v0, 0x93C($s1)
    ctx->pc = 0x19c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2364)));
    // 0x19c270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C270u;
    {
        const bool branch_taken_0x19c270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C270u;
        // 0x19c274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c270) {
            ctx->pc = 0x19C288u;
            return;
        }
    }
    ctx->pc = 0x19C278u;
    // 0x19c278: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x19c27c: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x19C27Cu;
    SET_GPR_U32(ctx, 31, 0x19C284u);
    ctx->pc = 0x19C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C27Cu;
    // 0x19c280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19C27Cu, 0x19C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C284u;
label_19c284:
    // 0x19c284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19c288u;
}
