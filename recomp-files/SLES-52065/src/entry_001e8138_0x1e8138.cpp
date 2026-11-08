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

// Function: entry_001e8138
// Address: 0x1e8138 - 0x1e81b4
void entry_001e8138_0x1e8138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8138_0x1e8138");
#endif

    switch (ctx->pc) {
        case 0x1e8174u: goto label_1e8174;
        case 0x1e817cu: goto label_1e817c;
        case 0x1e81a8u: goto label_1e81a8;
        default: break;
    }

    ctx->pc = 0x1e8138u;

    // 0x1e8138: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e8138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e813c: 0x27d40168  addiu       $s4, $fp, 0x168
    ctx->pc = 0x1e813cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 360));
    // 0x1e8140: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e8144: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e8144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e8148: 0xafc20168  sw          $v0, 0x168($fp)
    ctx->pc = 0x1e8148u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 360), GPR_U32(ctx, 2));
    // 0x1e814c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e814cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e8150: 0xafd40188  sw          $s4, 0x188($fp)
    ctx->pc = 0x1e8150u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 392), GPR_U32(ctx, 20));
    // 0x1e8154: 0x2463c320  addiu       $v1, $v1, -0x3CE0
    ctx->pc = 0x1e8154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951712));
    // 0x1e8158: 0x8fc20188  lw          $v0, 0x188($fp)
    ctx->pc = 0x1e8158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1e815c: 0x24843ed0  addiu       $a0, $a0, 0x3ED0
    ctx->pc = 0x1e815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16080));
    // 0x1e8160: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e8160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e8164: 0x8fc20188  lw          $v0, 0x188($fp)
    ctx->pc = 0x1e8164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1e8168: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e816c: 0xc080748  jal         func_201D20
    ctx->pc = 0x1E816Cu;
    SET_GPR_U32(ctx, 31, 0x1E8174u);
    ctx->pc = 0x1E8170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E816Cu;
    // 0x1e8170: 0xafc2018c  sw          $v0, 0x18C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E816Cu, 0x1E8174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8174u;
label_1e8174:
    // 0x1e8174: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1E8174u;
    SET_GPR_U32(ctx, 31, 0x1E817Cu);
    ctx->pc = 0x1E8178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8174u;
    // 0x1e8178: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E8174u, 0x1E817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E817Cu;
label_1e817c:
    // 0x1e817c: 0x8fc3018c  lw          $v1, 0x18C($fp)
    ctx->pc = 0x1e817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e8180: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e8180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8184: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e8184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e8188: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e8188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e818c: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e8190: 0xafdd0164  sw          $sp, 0x164($fp)
    ctx->pc = 0x1e8190u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 356), GPR_U32(ctx, 29));
    // 0x1e8194: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e8194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8198: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E8198u;
    {
        const bool branch_taken_0x1e8198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8198u;
        // 0x1e819c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8198) {
            ctx->pc = 0x1E81ECu;
            return;
        }
    }
    ctx->pc = 0x1E81A0u;
    // 0x1e81a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E81A0u;
    SET_GPR_U32(ctx, 31, 0x1E81A8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E81A0u, 0x1E81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81A8u;
label_1e81a8:
    // 0x1e81a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E81A8u;
    {
        const bool branch_taken_0x1e81a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81A8u;
        // 0x1e81ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81a8) {
            ctx->pc = 0x1E81B4u;
            return;
        }
    }
    ctx->pc = 0x1E81B0u;
    // 0x1e81b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e81b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e81b4u;
}
