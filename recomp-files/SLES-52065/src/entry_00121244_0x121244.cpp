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

// Function: entry_00121244
// Address: 0x121244 - 0x121278
void entry_00121244_0x121244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121244_0x121244");
#endif

    switch (ctx->pc) {
        case 0x121270u: goto label_121270;
        default: break;
    }

    ctx->pc = 0x121244u;

    // 0x121244: 0x9083003b  lbu         $v1, 0x3B($a0)
    ctx->pc = 0x121244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
    // 0x121248: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x121248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x12124c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12124cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x121250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x121250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x121254: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121254u;
    {
        const bool branch_taken_0x121254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121254u;
        // 0x121258: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121254) {
            ctx->pc = 0x121278u;
            return;
        }
    }
    ctx->pc = 0x12125Cu;
    // 0x12125c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12125cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x121260: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x121260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x121264: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x121268: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x121268u;
    SET_GPR_U32(ctx, 31, 0x121270u);
    ctx->pc = 0x12126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121268u;
    // 0x12126c: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x121268u, 0x121270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121270u;
label_121270:
    // 0x121270: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x121270u;
    SET_GPR_U32(ctx, 31, 0x121278u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x121270u, 0x121278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121278u;
}
