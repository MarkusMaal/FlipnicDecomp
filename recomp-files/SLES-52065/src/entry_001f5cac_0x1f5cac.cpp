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

// Function: entry_001f5cac
// Address: 0x1f5cac - 0x1f5d04
void entry_001f5cac_0x1f5cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5cac_0x1f5cac");
#endif

    switch (ctx->pc) {
        case 0x1f5cfcu: goto label_1f5cfc;
        default: break;
    }

    ctx->pc = 0x1f5cacu;

    // 0x1f5cac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f5cb0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f5cb4: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x1f5cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f5cb8: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1f5cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f5cbc: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1f5cc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5cc4: 0x27c210d0  addiu       $v0, $fp, 0x10D0
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4304));
    // 0x1f5cc8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f5cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5ccc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f5cd0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f5cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f5cd4: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5CD4u;
    {
        const bool branch_taken_0x1f5cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F5CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CD4u;
        // 0x1f5cd8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cd4) {
            ctx->pc = 0x1F5D04u;
            return;
        }
    }
    ctx->pc = 0x1F5CDCu;
    // 0x1f5cdc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f5ce0: 0x8c43bab4  lw          $v1, -0x454C($v0)
    ctx->pc = 0x1f5ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BAB4u));
    // 0x1f5ce4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F5CE4u;
    {
        const bool branch_taken_0x1f5ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CE4u;
        // 0x1f5ce8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ce4) {
            ctx->pc = 0x1F5D94u;
            return;
        }
    }
    ctx->pc = 0x1F5CECu;
    // 0x1f5cec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f5cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5cf0: 0x248445d0  addiu       $a0, $a0, 0x45D0
    ctx->pc = 0x1f5cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17872));
    // 0x1f5cf4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F5CF4u;
    SET_GPR_U32(ctx, 31, 0x1F5CFCu);
    ctx->pc = 0x1F5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5CF4u;
    // 0x1f5cf8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F5CF4u, 0x1F5CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5CFCu;
label_1f5cfc:
    // 0x1f5cfc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1F5CFCu;
    {
        const bool branch_taken_0x1f5cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CFCu;
        // 0x1f5d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cfc) {
            ctx->pc = 0x1F5DFCu;
            return;
        }
    }
    ctx->pc = 0x1F5D04u;
}
