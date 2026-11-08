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

// Function: entry_0012fb20
// Address: 0x12fb20 - 0x12fb70
void entry_0012fb20_0x12fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fb20_0x12fb20");
#endif

    switch (ctx->pc) {
        case 0x12fb38u: goto label_12fb38;
        case 0x12fb4cu: goto label_12fb4c;
        case 0x12fb58u: goto label_12fb58;
        default: break;
    }

    ctx->pc = 0x12fb20u;

    // 0x12fb20: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x12fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x12fb24: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12fb28: 0x24440370  addiu       $a0, $v0, 0x370
    ctx->pc = 0x12fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    // 0x12fb2c: 0x24a5ed58  addiu       $a1, $a1, -0x12A8
    ctx->pc = 0x12fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962520));
    // 0x12fb30: 0xc080702  jal         func_201C08
    ctx->pc = 0x12FB30u;
    SET_GPR_U32(ctx, 31, 0x12FB38u);
    ctx->pc = 0x12FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB30u;
    // 0x12fb34: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12FB30u, 0x12FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB38u;
label_12fb38:
    // 0x12fb38: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x12fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x12fb3c: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x12fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x12fb40: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x12fb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fb44: 0xc0805c8  jal         func_201720
    ctx->pc = 0x12FB44u;
    SET_GPR_U32(ctx, 31, 0x12FB4Cu);
    ctx->pc = 0x12FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB44u;
    // 0x12fb48: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x12FB44u, 0x12FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB4Cu;
label_12fb4c:
    // 0x12fb4c: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x12fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x12fb50: 0xc080748  jal         func_201D20
    ctx->pc = 0x12FB50u;
    SET_GPR_U32(ctx, 31, 0x12FB58u);
    ctx->pc = 0x12FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB50u;
    // 0x12fb54: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x12FB50u, 0x12FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB58u;
label_12fb58:
    // 0x12fb58: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x12fb58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12fb5c: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x12FB5Cu;
    {
        const bool branch_taken_0x12fb5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB5Cu;
        // 0x12fb60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb5c) {
            ctx->pc = 0x12FC7Cu;
            return;
        }
    }
    ctx->pc = 0x12FB64u;
    // 0x12fb64: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x12fb64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x12fb68: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x12FB68u;
    {
        const bool branch_taken_0x12fb68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB68u;
        // 0x12fb6c: 0x2448fff8  addiu       $t0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb68) {
            ctx->pc = 0x12FC24u;
            return;
        }
    }
    ctx->pc = 0x12FB70u;
}
