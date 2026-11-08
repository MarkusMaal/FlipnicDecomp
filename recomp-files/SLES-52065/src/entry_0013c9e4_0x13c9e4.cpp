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

// Function: entry_0013c9e4
// Address: 0x13c9e4 - 0x13ca0c
void entry_0013c9e4_0x13c9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c9e4_0x13c9e4");
#endif

    switch (ctx->pc) {
        case 0x13c9f8u: goto label_13c9f8;
        case 0x13ca08u: goto label_13ca08;
        default: break;
    }

    ctx->pc = 0x13c9e4u;

    // 0x13c9e4: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x13c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x13c9e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C9E8u;
    {
        const bool branch_taken_0x13c9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9E8u;
        // 0x13c9ec: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9e8) {
            ctx->pc = 0x13CA0Cu;
            return;
        }
    }
    ctx->pc = 0x13C9F0u;
    // 0x13c9f0: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x13C9F0u;
    SET_GPR_U32(ctx, 31, 0x13C9F8u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x13C9F0u, 0x13C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9F8u;
label_13c9f8:
    // 0x13c9f8: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x13c9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x13c9fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca00: 0xc051324  jal         func_144C90
    ctx->pc = 0x13CA00u;
    SET_GPR_U32(ctx, 31, 0x13CA08u);
    ctx->pc = 0x13CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA00u;
    // 0x13ca04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144C90u, 0x13CA00u, 0x13CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA08u;
label_13ca08:
    // 0x13ca08: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x13ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->pc = 0x13ca0cu;
}
