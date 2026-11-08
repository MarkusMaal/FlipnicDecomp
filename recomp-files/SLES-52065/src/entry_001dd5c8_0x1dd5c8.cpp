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

// Function: entry_001dd5c8
// Address: 0x1dd5c8 - 0x1dd620
void entry_001dd5c8_0x1dd5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd5c8_0x1dd5c8");
#endif

    ctx->pc = 0x1dd5c8u;

    // 0x1dd5c8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1dd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1dd5cc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dd5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dd5d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd5d4: 0x24647330  addiu       $a0, $v1, 0x7330
    ctx->pc = 0x1dd5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dd5d8: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x1dd5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd5dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dd5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5e0: 0x25020080  addiu       $v0, $t0, 0x80
    ctx->pc = 0x1dd5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x1dd5e4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1dd5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1dd5e8: 0xc23821  addu        $a3, $a2, $v0
    ctx->pc = 0x1dd5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dd5ec: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1dd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd5f0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1dd5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5f4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1dd5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1dd5f8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD5F8u;
    {
        const bool branch_taken_0x1dd5f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5F8u;
        // 0x1dd5fc: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5f8) {
            ctx->pc = 0x1DD620u;
            return;
        }
    }
    ctx->pc = 0x1DD600u;
    // 0x1dd600: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1dd600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1dd604: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD604u;
    {
        const bool branch_taken_0x1dd604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD604u;
        // 0x1dd608: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd604) {
            ctx->pc = 0x1DD620u;
            return;
        }
    }
    ctx->pc = 0x1DD60Cu;
    // 0x1dd60c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd610: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1dd610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1dd614: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD614u;
        // 0x1dd618: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD61Cu;
    // 0x1dd61c: 0x0  nop
    ctx->pc = 0x1dd61cu;
    // NOP
    ctx->pc = 0x1dd620u;
}
