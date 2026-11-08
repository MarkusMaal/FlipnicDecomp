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

// Function: entry_001209f8
// Address: 0x1209f8 - 0x120a2c
void entry_001209f8_0x1209f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001209f8_0x1209f8");
#endif

    switch (ctx->pc) {
        case 0x120a24u: goto label_120a24;
        default: break;
    }

    ctx->pc = 0x1209f8u;

    // 0x1209f8: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x1209f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
    // 0x1209fc: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1209fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x120a00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x120a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x120a04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x120a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120a08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120A08u;
    {
        const bool branch_taken_0x120a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A08u;
        // 0x120a0c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a08) {
            ctx->pc = 0x120A2Cu;
            return;
        }
    }
    ctx->pc = 0x120A10u;
    // 0x120a10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x120a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x120a14: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x120a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x120a18: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x120a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x120a1c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x120A1Cu;
    SET_GPR_U32(ctx, 31, 0x120A24u);
    ctx->pc = 0x120A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A1Cu;
    // 0x120a20: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x120A1Cu, 0x120A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A24u;
label_120a24:
    // 0x120a24: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x120A24u;
    SET_GPR_U32(ctx, 31, 0x120A2Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x120A24u, 0x120A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A2Cu;
}
