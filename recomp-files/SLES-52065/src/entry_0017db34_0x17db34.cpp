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

// Function: entry_0017db34
// Address: 0x17db34 - 0x17db84
void entry_0017db34_0x17db34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017db34_0x17db34");
#endif

    switch (ctx->pc) {
        case 0x17db50u: goto label_17db50;
        case 0x17db6cu: goto label_17db6c;
        case 0x17db74u: goto label_17db74;
        default: break;
    }

    ctx->pc = 0x17db34u;

    // 0x17db34: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x17db38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17db38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17db3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17db40: 0x24a5f920  addiu       $a1, $a1, -0x6E0
    ctx->pc = 0x17db40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
    // 0x17db44: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17db44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17db48: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DB48u;
    SET_GPR_U32(ctx, 31, 0x17DB50u);
    ctx->pc = 0x17DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB48u;
    // 0x17db4c: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DB48u, 0x17DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB50u;
label_17db50:
    // 0x17db50: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17db50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x17db54: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17db54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17db58: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x17db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x17db5c: 0x24a5f920  addiu       $a1, $a1, -0x6E0
    ctx->pc = 0x17db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
    // 0x17db60: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17db60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17db64: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DB64u;
    SET_GPR_U32(ctx, 31, 0x17DB6Cu);
    ctx->pc = 0x17DB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB64u;
    // 0x17db68: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DB64u, 0x17DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB6Cu;
label_17db6c:
    // 0x17db6c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x17DB6Cu;
    SET_GPR_U32(ctx, 31, 0x17DB74u);
    ctx->pc = 0x17DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB6Cu;
    // 0x17db70: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x17DB6Cu, 0x17DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB74u;
label_17db74:
    // 0x17db74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DB74u;
    {
        const bool branch_taken_0x17db74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB74u;
        // 0x17db78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db74) {
            ctx->pc = 0x17DB84u;
            return;
        }
    }
    ctx->pc = 0x17DB7Cu;
    // 0x17db7c: 0xc05f380  jal         func_17CE00
    ctx->pc = 0x17DB7Cu;
    SET_GPR_U32(ctx, 31, 0x17DB84u);
    ctx->pc = 0x17CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE00u, 0x17DB7Cu, 0x17DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB84u;
}
