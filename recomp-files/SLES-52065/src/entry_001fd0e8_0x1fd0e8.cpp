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

// Function: entry_001fd0e8
// Address: 0x1fd0e8 - 0x1fd138
void entry_001fd0e8_0x1fd0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd0e8_0x1fd0e8");
#endif

    switch (ctx->pc) {
        case 0x1fd0f4u: goto label_1fd0f4;
        case 0x1fd104u: goto label_1fd104;
        case 0x1fd118u: goto label_1fd118;
        case 0x1fd134u: goto label_1fd134;
        default: break;
    }

    ctx->pc = 0x1fd0e8u;

    // 0x1fd0e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fd0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd0ec: 0xc07effe  jal         func_1FBFF8
    ctx->pc = 0x1FD0ECu;
    SET_GPR_U32(ctx, 31, 0x1FD0F4u);
    ctx->pc = 0x1FD0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0ECu;
    // 0x1fd0f0: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFF8u, 0x1FD0ECu, 0x1FD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0F4u;
label_1fd0f4:
    // 0x1fd0f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fd0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd0f8: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x1fd0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1fd0fc: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FD0FCu;
    SET_GPR_U32(ctx, 31, 0x1FD104u);
    ctx->pc = 0x1FD100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0FCu;
    // 0x1fd100: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FD0FCu, 0x1FD104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD104u;
label_1fd104:
    // 0x1fd104: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1fd104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1fd108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd10c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1fd10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd110: 0xc080112  jal         func_200448
    ctx->pc = 0x1FD110u;
    SET_GPR_U32(ctx, 31, 0x1FD118u);
    ctx->pc = 0x1FD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD110u;
    // 0x1fd114: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200448u, 0x1FD110u, 0x1FD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD118u;
label_1fd118:
    // 0x1fd118: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fd118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd11c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1fd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fd120: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD120u;
    {
        const bool branch_taken_0x1fd120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD120u;
        // 0x1fd124: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd120) {
            ctx->pc = 0x1FD138u;
            return;
        }
    }
    ctx->pc = 0x1FD128u;
    // 0x1fd128: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fd128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd12c: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FD12Cu;
    SET_GPR_U32(ctx, 31, 0x1FD134u);
    ctx->pc = 0x1FD130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD12Cu;
    // 0x1fd130: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FD12Cu, 0x1FD134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD134u;
label_1fd134:
    // 0x1fd134: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fd138u;
}
