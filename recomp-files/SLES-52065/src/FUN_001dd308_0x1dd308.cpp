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

// Function: FUN_001dd308
// Address: 0x1dd308 - 0x1dd3a4
void FUN_001dd308_0x1dd308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd308_0x1dd308");
#endif

    ctx->pc = 0x1dd308u;

    // 0x1dd308: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD308u;
    {
        const bool branch_taken_0x1dd308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD308u;
        // 0x1dd30c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd308) {
            ctx->pc = 0x1DD348u;
            goto label_1dd348;
        }
    }
    ctx->pc = 0x1DD310u;
    // 0x1dd310: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1dd310u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1dd314: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1dd314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1dd318: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x1dd318u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1dd31c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd320: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dd320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd324: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd328: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1dd328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1dd32c: 0x24217330  addiu       $at, $at, 0x7330
    ctx->pc = 0x1dd32cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29488));
    // 0x1dd330: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1dd330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1dd334: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dd334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd338: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1dd338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1dd33c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DD33Cu;
    {
        const bool branch_taken_0x1dd33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD33Cu;
        // 0x1dd340: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd33c) {
            ctx->pc = 0x1DD37Cu;
            goto label_1dd37c;
        }
    }
    ctx->pc = 0x1DD344u;
    // 0x1dd344: 0x0  nop
    ctx->pc = 0x1dd344u;
    // NOP
label_1dd348:
    // 0x1dd348: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1dd34c: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x1dd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1dd350: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x1dd350u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1dd354: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1dd354u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1dd358: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd35c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dd35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dd360: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd364: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1dd364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1dd368: 0x24217330  addiu       $at, $at, 0x7330
    ctx->pc = 0x1dd368u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29488));
    // 0x1dd36c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1dd370: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1dd370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd374: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1dd374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1dd378: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1dd378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1dd37c:
    // 0x1dd37c: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x1dd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1dd380: 0x24e47330  addiu       $a0, $a3, 0x7330
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 29488));
    // 0x1dd384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd388: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd38c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd390: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd394: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dd394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd398: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1dd398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1dd39c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD39Cu;
        // 0x1dd3a0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3A4u;
}
