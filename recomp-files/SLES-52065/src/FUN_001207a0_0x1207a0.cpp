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

// Function: FUN_001207a0
// Address: 0x1207a0 - 0x120804
void FUN_001207a0_0x1207a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001207a0_0x1207a0");
#endif

    switch (ctx->pc) {
        case 0x1207f0u: goto label_1207f0;
        case 0x1207f8u: goto label_1207f8;
        default: break;
    }

    ctx->pc = 0x1207a0u;

    // 0x1207a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1207a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1207a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1207a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1207a8: 0xa085003a  sb          $a1, 0x3A($a0)
    ctx->pc = 0x1207a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 5));
    // 0x1207ac: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1207acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1207b0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1207B0u;
    {
        const bool branch_taken_0x1207b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1207b0) {
            ctx->pc = 0x1207C4u;
            goto label_1207c4;
        }
    }
    ctx->pc = 0x1207B8u;
    // 0x1207b8: 0x9083003a  lbu         $v1, 0x3A($a0)
    ctx->pc = 0x1207b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1207bc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1207bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1207c0: 0xa083003a  sb          $v1, 0x3A($a0)
    ctx->pc = 0x1207c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 3));
label_1207c4:
    // 0x1207c4: 0x9085003b  lbu         $a1, 0x3B($a0)
    ctx->pc = 0x1207c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
    // 0x1207c8: 0x9083003a  lbu         $v1, 0x3A($a0)
    ctx->pc = 0x1207c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1207cc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1207ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1207d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1207d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1207d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1207D4u;
    {
        const bool branch_taken_0x1207d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1207D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207D4u;
        // 0x1207d8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207d4) {
            ctx->pc = 0x1207F8u;
            goto label_1207f8;
        }
    }
    ctx->pc = 0x1207DCu;
    // 0x1207dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1207dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1207e0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1207e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1207e4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1207e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1207e8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1207E8u;
    SET_GPR_U32(ctx, 31, 0x1207F0u);
    ctx->pc = 0x1207ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1207E8u;
    // 0x1207ec: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1207E8u, 0x1207F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207F0u;
label_1207f0:
    // 0x1207f0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1207F0u;
    SET_GPR_U32(ctx, 31, 0x1207F8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1207F0u, 0x1207F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207F8u;
label_1207f8:
    // 0x1207f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1207f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1207FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207FCu;
        // 0x120800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1207FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120804u;
}
