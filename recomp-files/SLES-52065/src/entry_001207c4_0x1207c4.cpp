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

// Function: entry_001207c4
// Address: 0x1207c4 - 0x1207f8
void entry_001207c4_0x1207c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001207c4_0x1207c4");
#endif

    switch (ctx->pc) {
        case 0x1207f0u: goto label_1207f0;
        default: break;
    }

    ctx->pc = 0x1207c4u;

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
            return;
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
}
