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

// Function: FUN_001dc900
// Address: 0x1dc900 - 0x1dc974
void FUN_001dc900_0x1dc900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dc900_0x1dc900");
#endif

    ctx->pc = 0x1dc900u;

    // 0x1dc900: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1dc900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dc904: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1dc904u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1dc908: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1dc908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc90c: 0x25297320  addiu       $t1, $t1, 0x7320
    ctx->pc = 0x1dc90cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29472));
    // 0x1dc910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc914: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dc914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dc918: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dc918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc91c: 0x8d2c0000  lw          $t4, 0x0($t1)
    ctx->pc = 0x1dc91cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1dc920: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dc920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dc924: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1dc924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dc928: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x1dc928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dc92c: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x1dc92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dc930: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x1dc930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dc934: 0x456821  addu        $t5, $v0, $a1
    ctx->pc = 0x1dc934u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc938: 0xe65821  addu        $t3, $a3, $a2
    ctx->pc = 0x1dc938u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1dc93c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1dc93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1dc940: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x1dc940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc944: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dc944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dc948: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc94c: 0x258a0001  addiu       $t2, $t4, 0x1
    ctx->pc = 0x1dc94cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1dc950: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1dc950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dc954: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x1dc954u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x1dc958: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1dc958u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1dc95c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1dc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1dc960: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1dc960u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1dc964: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1dc964u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1dc968: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1dc968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1dc96c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC96Cu;
        // 0x1dc970: 0xadac0000  sw          $t4, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC974u;
}
