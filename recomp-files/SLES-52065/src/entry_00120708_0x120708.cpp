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

// Function: entry_00120708
// Address: 0x120708 - 0x12073c
void entry_00120708_0x120708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120708_0x120708");
#endif

    switch (ctx->pc) {
        case 0x120734u: goto label_120734;
        default: break;
    }

    ctx->pc = 0x120708u;

    // 0x120708: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x120708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
    // 0x12070c: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x12070cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x120710: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x120710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x120714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x120714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120718: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120718u;
    {
        const bool branch_taken_0x120718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120718u;
        // 0x12071c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120718) {
            ctx->pc = 0x12073Cu;
            return;
        }
    }
    ctx->pc = 0x120720u;
    // 0x120720: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x120720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x120724: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x120724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x120728: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x120728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12072c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12072Cu;
    SET_GPR_U32(ctx, 31, 0x120734u);
    ctx->pc = 0x120730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12072Cu;
    // 0x120730: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12072Cu, 0x120734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120734u;
label_120734:
    // 0x120734: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x120734u;
    SET_GPR_U32(ctx, 31, 0x12073Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x120734u, 0x12073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12073Cu;
}
