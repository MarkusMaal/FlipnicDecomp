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

// Function: entry_001d8828
// Address: 0x1d8828 - 0x1d8868
void entry_001d8828_0x1d8828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8828_0x1d8828");
#endif

    switch (ctx->pc) {
        case 0x1d8844u: goto label_1d8844;
        default: break;
    }

    ctx->pc = 0x1d8828u;

    // 0x1d8828: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d882c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d882cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8830: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d8830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d8834: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1d8834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d8838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d883c: 0xc0772c0  jal         func_1DCB00
    ctx->pc = 0x1D883Cu;
    SET_GPR_U32(ctx, 31, 0x1D8844u);
    ctx->pc = 0x1D8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D883Cu;
    // 0x1d8840: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCB00u, 0x1D883Cu, 0x1D8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8844u;
label_1d8844:
    // 0x1d8844: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d8844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8848: 0x600008e  bltz        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1D8848u;
    {
        const bool branch_taken_0x1d8848 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8848u;
        // 0x1d884c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8848) {
            ctx->pc = 0x1D8A84u;
            return;
        }
    }
    ctx->pc = 0x1D8850u;
    // 0x1d8850: 0x4493a000  mtc1        $s3, $f20
    ctx->pc = 0x1d8850u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d8854: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d8854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1d8858: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1d8858u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d885c: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d885cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d8860: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d8860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8864: 0x0  nop
    ctx->pc = 0x1d8864u;
    // NOP
    ctx->pc = 0x1d8868u;
}
