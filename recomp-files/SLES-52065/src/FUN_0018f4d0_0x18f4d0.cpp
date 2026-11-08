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

// Function: FUN_0018f4d0
// Address: 0x18f4d0 - 0x18f580
void FUN_0018f4d0_0x18f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f4d0_0x18f4d0");
#endif

    ctx->pc = 0x18f4d0u;

    // 0x18f4d0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x18f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x18f4d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f4d8: 0x2442b1f0  addiu       $v0, $v0, -0x4E10
    ctx->pc = 0x18f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947312));
    // 0x18f4dc: 0xac82031c  sw          $v0, 0x31C($a0)
    ctx->pc = 0x18f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 796), GPR_U32(ctx, 2));
    // 0x18f4e0: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x18f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x18f4e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18f4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4e8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x18f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x18f4ec: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f4f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f4f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f4f8: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x18f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x18f4fc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f500: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x18f500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f504: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x18f504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18f508: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18f508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18f50c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18f50cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18f510: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f514: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18f514u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18f518: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x18f518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18f51c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x18f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x18f520: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f524: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x18f524u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f528: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x18f528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18f52c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18f530: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18f530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18f534: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f538: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18f538u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18f53c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x18f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18f540: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x18f540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x18f544: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f548: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f54c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f550: 0xac650254  sw          $a1, 0x254($v1)
    ctx->pc = 0x18f550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 5));
    // 0x18f554: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x18f554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x18f558: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x18f558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x18f55c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x18f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x18f560: 0xac84002c  sw          $a0, 0x2C($a0)
    ctx->pc = 0x18f560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 4));
    // 0x18f564: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x18f564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x18f568: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x18f568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x18f56c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x18f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x18f570: 0xac84001c  sw          $a0, 0x1C($a0)
    ctx->pc = 0x18f570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
    // 0x18f574: 0xac850314  sw          $a1, 0x314($a0)
    ctx->pc = 0x18f574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 788), GPR_U32(ctx, 5));
    // 0x18f578: 0x3e00008  jr          $ra
    ctx->pc = 0x18F578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F578u;
        // 0x18f57c: 0xac850318  sw          $a1, 0x318($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 792), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F580u;
}
