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

// Function: entry_001115f4
// Address: 0x1115f4 - 0x111634
void entry_001115f4_0x1115f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001115f4_0x1115f4");
#endif

    switch (ctx->pc) {
        case 0x11162cu: goto label_11162c;
        default: break;
    }

    ctx->pc = 0x1115f4u;

    // 0x1115f4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1115f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1115f8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1115f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1115fc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1115fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x111600: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11160c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x11160cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111610: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x111610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x111614: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x111614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x111618: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x11161c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11161Cu;
    {
        const bool branch_taken_0x11161c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11161Cu;
        // 0x111620: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11161c) {
            ctx->pc = 0x111634u;
            return;
        }
    }
    ctx->pc = 0x111624u;
    // 0x111624: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x111624u;
    SET_GPR_U32(ctx, 31, 0x11162Cu);
    ctx->pc = 0x111628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111624u;
    // 0x111628: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x111624u, 0x11162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11162Cu;
label_11162c:
    // 0x11162c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11162Cu;
    {
        const bool branch_taken_0x11162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11162c) {
            ctx->pc = 0x111644u;
            return;
        }
    }
    ctx->pc = 0x111634u;
}
