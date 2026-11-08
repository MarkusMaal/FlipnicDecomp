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

// Function: entry_00123e88
// Address: 0x123e88 - 0x123ef0
void entry_00123e88_0x123e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123e88_0x123e88");
#endif

    switch (ctx->pc) {
        case 0x123ed0u: goto label_123ed0;
        default: break;
    }

    ctx->pc = 0x123e88u;

    // 0x123e88: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x123e88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x123e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123e90: 0x2223004  sllv        $a2, $v0, $s1
    ctx->pc = 0x123e90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x123e94: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x123e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x123e98: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x123e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x123e9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x123e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ea0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x123ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ea4: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x123ea4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x123ea8: 0x0  nop
    ctx->pc = 0x123ea8u;
    // NOP
    // 0x123eac: 0x0  nop
    ctx->pc = 0x123eacu;
    // NOP
    // 0x123eb0: 0x9012  mflo        $s2
    ctx->pc = 0x123eb0u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x123eb4: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x123eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x123eb8: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x123eb8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x123ebc: 0x0  nop
    ctx->pc = 0x123ebcu;
    // NOP
    // 0x123ec0: 0x0  nop
    ctx->pc = 0x123ec0u;
    // NOP
    // 0x123ec4: 0x3812  mflo        $a3
    ctx->pc = 0x123ec4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x123ec8: 0xc047ec4  jal         func_11FB10
    ctx->pc = 0x123EC8u;
    SET_GPR_U32(ctx, 31, 0x123ED0u);
    ctx->pc = 0x123ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123EC8u;
    // 0x123ecc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB10u, 0x123EC8u, 0x123ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123ED0u;
label_123ed0:
    // 0x123ed0: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x123ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x123ed4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x123ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x123ed8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123ED8u;
    {
        const bool branch_taken_0x123ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123ed8) {
            ctx->pc = 0x123EF0u;
            return;
        }
    }
    ctx->pc = 0x123EE0u;
    // 0x123ee0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x123ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x123ee4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x123ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x123ee8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x123ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x123eec: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x123eecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->pc = 0x123ef0u;
}
