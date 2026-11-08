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

// Function: FUN_0015bf20
// Address: 0x15bf20 - 0x15bf90
void FUN_0015bf20_0x15bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bf20_0x15bf20");
#endif

    switch (ctx->pc) {
        case 0x15bf60u: goto label_15bf60;
        case 0x15bf78u: goto label_15bf78;
        default: break;
    }

    ctx->pc = 0x15bf20u;

    // 0x15bf20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bf24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15bf28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bf2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bf30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15bf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf34: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15BF34u;
    {
        const bool branch_taken_0x15bf34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF34u;
        // 0x15bf38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf34) {
            ctx->pc = 0x15BF78u;
            goto label_15bf78;
        }
    }
    ctx->pc = 0x15BF3Cu;
    // 0x15bf3c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bf40: 0x24429650  addiu       $v0, $v0, -0x69B0
    ctx->pc = 0x15bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940240));
    // 0x15bf44: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BF44u;
    {
        const bool branch_taken_0x15bf44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF44u;
        // 0x15bf48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf44) {
            ctx->pc = 0x15BF60u;
            goto label_15bf60;
        }
    }
    ctx->pc = 0x15BF4Cu;
    // 0x15bf4c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bf50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf54: 0x24429710  addiu       $v0, $v0, -0x68F0
    ctx->pc = 0x15bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940432));
    // 0x15bf58: 0xc041808  jal         func_106020
    ctx->pc = 0x15BF58u;
    SET_GPR_U32(ctx, 31, 0x15BF60u);
    ctx->pc = 0x15BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF58u;
    // 0x15bf5c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106020u, 0x15BF58u, 0x15BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF60u;
label_15bf60:
    // 0x15bf60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x15bf64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bf64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bf68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BF68u;
    {
        const bool branch_taken_0x15bf68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF68u;
        // 0x15bf6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf68) {
            ctx->pc = 0x15BF7Cu;
            goto label_15bf7c;
        }
    }
    ctx->pc = 0x15BF70u;
    // 0x15bf70: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15BF70u;
    SET_GPR_U32(ctx, 31, 0x15BF78u);
    ctx->pc = 0x15BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF70u;
    // 0x15bf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15BF70u, 0x15BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF78u;
label_15bf78:
    // 0x15bf78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15bf78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bf7c:
    // 0x15bf7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bf80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bf80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bf84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf88: 0x3e00008  jr          $ra
    ctx->pc = 0x15BF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF88u;
        // 0x15bf8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BF90u;
}
