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

// Function: entry_001fd294
// Address: 0x1fd294 - 0x1fd2d0
void entry_001fd294_0x1fd294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd294_0x1fd294");
#endif

    switch (ctx->pc) {
        case 0x1fd2a0u: goto label_1fd2a0;
        case 0x1fd2b0u: goto label_1fd2b0;
        default: break;
    }

    ctx->pc = 0x1fd294u;

    // 0x1fd294: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd298: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FD298u;
    SET_GPR_U32(ctx, 31, 0x1FD2A0u);
    ctx->pc = 0x1FD29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD298u;
    // 0x1fd29c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FD298u, 0x1FD2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2A0u;
label_1fd2a0:
    // 0x1fd2a0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fd2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1fd2a4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1fd2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1fd2a8: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FD2A8u;
    SET_GPR_U32(ctx, 31, 0x1FD2B0u);
    ctx->pc = 0x1FD2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2A8u;
    // 0x1fd2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FD2A8u, 0x1FD2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2B0u;
label_1fd2b0:
    // 0x1fd2b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd2b4: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD2B4u;
    {
        const bool branch_taken_0x1fd2b4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1fd2b4) {
            ctx->pc = 0x1FD2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD2B4u;
            // 0x1fd2b8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD2D4u;
            return;
        }
    }
    ctx->pc = 0x1FD2BCu;
    // 0x1fd2bc: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD2BCu;
    {
        const bool branch_taken_0x1fd2bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2BCu;
        // 0x1fd2c0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2bc) {
            ctx->pc = 0x1FD320u;
            return;
        }
    }
    ctx->pc = 0x1FD2C4u;
    // 0x1fd2c4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1fd2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1fd2c8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FD2C8u;
    {
        const bool branch_taken_0x1fd2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2c8) {
            ctx->pc = 0x1FD2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD2C8u;
            // 0x1fd2cc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD324u;
            return;
        }
    }
    ctx->pc = 0x1FD2D0u;
}
