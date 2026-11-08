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

// Function: entry_0017f7f8
// Address: 0x17f7f8 - 0x17f830
void entry_0017f7f8_0x17f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f7f8_0x17f7f8");
#endif

    switch (ctx->pc) {
        case 0x17f800u: goto label_17f800;
        case 0x17f824u: goto label_17f824;
        case 0x17f82cu: goto label_17f82c;
        default: break;
    }

    ctx->pc = 0x17f7f8u;

    // 0x17f7f8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x17F7F8u;
    SET_GPR_U32(ctx, 31, 0x17F800u);
    ctx->pc = 0x17F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7F8u;
    // 0x17f7fc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x17F7F8u, 0x17F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F800u;
label_17f800:
    // 0x17f800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f804: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x17F804u;
    {
        const bool branch_taken_0x17f804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F804u;
        // 0x17f808: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f804) {
            ctx->pc = 0x17F830u;
            return;
        }
    }
    ctx->pc = 0x17F80Cu;
    // 0x17f80c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x17f80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x17f810: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17f810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17f814: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x17f814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x17f818: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17f81c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x17F81Cu;
    SET_GPR_U32(ctx, 31, 0x17F824u);
    ctx->pc = 0x17F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F81Cu;
    // 0x17f820: 0x24a5f940  addiu       $a1, $a1, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x17F81Cu, 0x17F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F824u;
label_17f824:
    // 0x17f824: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x17F824u;
    SET_GPR_U32(ctx, 31, 0x17F82Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x17F824u, 0x17F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F82Cu;
label_17f82c:
    // 0x17f82c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x17f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x17f830u;
}
