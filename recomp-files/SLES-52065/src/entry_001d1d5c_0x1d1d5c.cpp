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

// Function: entry_001d1d5c
// Address: 0x1d1d5c - 0x1d1dac
void entry_001d1d5c_0x1d1d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1d5c_0x1d1d5c");
#endif

    switch (ctx->pc) {
        case 0x1d1d64u: goto label_1d1d64;
        case 0x1d1d8cu: goto label_1d1d8c;
        case 0x1d1d9cu: goto label_1d1d9c;
        default: break;
    }

    ctx->pc = 0x1d1d5cu;

    // 0x1d1d5c: 0xc0749d0  jal         func_1D2740
    ctx->pc = 0x1D1D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D1D64u);
    ctx->pc = 0x1D1D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D5Cu;
    // 0x1d1d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2740u, 0x1D1D5Cu, 0x1D1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D64u;
label_1d1d64:
    // 0x1d1d64: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D1D64u;
    {
        const bool branch_taken_0x1d1d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D64u;
        // 0x1d1d68: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d64) {
            ctx->pc = 0x1D1DD8u;
            return;
        }
    }
    ctx->pc = 0x1D1D6Cu;
    // 0x1d1d6c: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1d1d70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d78: 0x24c6fd40  addiu       $a2, $a2, -0x2C0
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966592));
    // 0x1d1d7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d1d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1d84: 0xc07e39c  jal         func_1F8E70
    ctx->pc = 0x1D1D84u;
    SET_GPR_U32(ctx, 31, 0x1D1D8Cu);
    ctx->pc = 0x1D1D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D84u;
    // 0x1d1d88: 0x2529fd00  addiu       $t1, $t1, -0x300 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8E70u, 0x1D1D84u, 0x1D1D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D8Cu;
label_1d1d8c:
    // 0x1d1d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d94: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D1D94u;
    SET_GPR_U32(ctx, 31, 0x1D1D9Cu);
    ctx->pc = 0x1D1D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D94u;
    // 0x1d1d98: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D1D94u, 0x1D1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D9Cu;
label_1d1d9c:
    // 0x1d1d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1da0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1da4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D1DA4u;
    {
        const bool branch_taken_0x1d1da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DA4u;
        // 0x1d1da8: 0xac23fd80  sw          $v1, -0x280($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1da4) {
            ctx->pc = 0x1D1DD8u;
            return;
        }
    }
    ctx->pc = 0x1D1DACu;
}
