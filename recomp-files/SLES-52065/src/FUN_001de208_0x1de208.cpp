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

// Function: FUN_001de208
// Address: 0x1de208 - 0x1de274
void FUN_001de208_0x1de208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001de208_0x1de208");
#endif

    switch (ctx->pc) {
        case 0x1de234u: goto label_1de234;
        default: break;
    }

    ctx->pc = 0x1de208u;

    // 0x1de208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de20c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de214: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1de214u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1de218: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de21c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1de21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1de220: 0x24217300  addiu       $at, $at, 0x7300
    ctx->pc = 0x1de220u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29440));
    // 0x1de224: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1de224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1de228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de22c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DE22Cu;
    SET_GPR_U32(ctx, 31, 0x1DE234u);
    ctx->pc = 0x1DE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE22Cu;
    // 0x1de230: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DE22Cu, 0x1DE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE234u;
label_1de234:
    // 0x1de234: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1de234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de238: 0x118827  nor         $s1, $zero, $s1
    ctx->pc = 0x1de238u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x1de23c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1de23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1de240: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE240u;
    {
        const bool branch_taken_0x1de240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE240u;
        // 0x1de244: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de240) {
            ctx->pc = 0x1DE260u;
            goto label_1de260;
        }
    }
    ctx->pc = 0x1DE248u;
    // 0x1de248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de24c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de254: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DE254u;
    ctx->pc = 0x1DE258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE254u;
    // 0x1de258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE25Cu;
    // 0x1de25c: 0x0  nop
    ctx->pc = 0x1de25cu;
    // NOP
label_1de260:
    // 0x1de260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de26c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE26Cu;
        // 0x1de270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE274u;
}
