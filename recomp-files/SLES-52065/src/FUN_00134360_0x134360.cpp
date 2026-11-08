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

// Function: FUN_00134360
// Address: 0x134360 - 0x1343c0
void FUN_00134360_0x134360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134360_0x134360");
#endif

    switch (ctx->pc) {
        case 0x134380u: goto label_134380;
        case 0x134390u: goto label_134390;
        case 0x13439cu: goto label_13439c;
        case 0x1343acu: goto label_1343ac;
        default: break;
    }

    ctx->pc = 0x134360u;

    // 0x134360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134364: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x134368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13436c: 0x24a5ee70  addiu       $a1, $a1, -0x1190
    ctx->pc = 0x13436cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962800));
    // 0x134370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134378: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x134378u;
    SET_GPR_U32(ctx, 31, 0x134380u);
    ctx->pc = 0x13437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134378u;
    // 0x13437c: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x134378u, 0x134380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134380u;
label_134380:
    // 0x134380: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x134380u;
    {
        const bool branch_taken_0x134380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134380) {
            ctx->pc = 0x1343ACu;
            goto label_1343ac;
        }
    }
    ctx->pc = 0x134388u;
    // 0x134388: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x134388u;
    SET_GPR_U32(ctx, 31, 0x134390u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x134388u, 0x134390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134390u;
label_134390:
    // 0x134390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134394: 0xc046c14  jal         func_11B050
    ctx->pc = 0x134394u;
    SET_GPR_U32(ctx, 31, 0x13439Cu);
    ctx->pc = 0x134398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134394u;
    // 0x134398: 0x26050140  addiu       $a1, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x134394u, 0x13439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13439Cu;
label_13439c:
    // 0x13439c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13439cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1343a0: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x1343a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1343a4: 0xc080702  jal         func_201C08
    ctx->pc = 0x1343A4u;
    SET_GPR_U32(ctx, 31, 0x1343ACu);
    ctx->pc = 0x1343A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343A4u;
    // 0x1343a8: 0x24a5ee70  addiu       $a1, $a1, -0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1343A4u, 0x1343ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1343ACu;
label_1343ac:
    // 0x1343ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1343acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1343b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1343b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1343b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1343b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1343B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1343BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343B8u;
        // 0x1343bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1343B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1343C0u;
}
