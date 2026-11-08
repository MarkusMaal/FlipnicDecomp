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

// Function: FUN_00186390
// Address: 0x186390 - 0x1863ec
void FUN_00186390_0x186390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186390_0x186390");
#endif

    ctx->pc = 0x186390u;

    // 0x186390: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x186390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x186394: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x186394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x186398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18639c: 0x24c692c0  addiu       $a2, $a2, -0x6D40
    ctx->pc = 0x18639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939328));
    // 0x1863a0: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x1863a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1863a4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1863a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1863a8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1863a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1863ac: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x1863acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1863b0: 0x248492c4  addiu       $a0, $a0, -0x6D3C
    ctx->pc = 0x1863b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939332));
    // 0x1863b4: 0x246392c8  addiu       $v1, $v1, -0x6D38
    ctx->pc = 0x1863b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939336));
    // 0x1863b8: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x1863b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1863bc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1863bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1863c0: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x1863c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1863c4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1863c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1863c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1863c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1863cc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1863ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1863d0: 0x8f8486d4  lw          $a0, -0x792C($gp)
    ctx->pc = 0x1863d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x1863d4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1863d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1863d8: 0x246392cc  addiu       $v1, $v1, -0x6D34
    ctx->pc = 0x1863d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939340));
    // 0x1863dc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1863dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1863e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1863e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1863e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1863E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1863E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863E4u;
        // 0x1863e8: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1863E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1863ECu;
}
