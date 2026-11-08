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

// Function: FUN_001fd4f8
// Address: 0x1fd4f8 - 0x1fd550
void FUN_001fd4f8_0x1fd4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd4f8_0x1fd4f8");
#endif

    ctx->pc = 0x1fd4f8u;

    // 0x1fd4f8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fd4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fd4fc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fd4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fd500: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fd500u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1fd504: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x1fd504u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x1fd508: 0x24421820  addiu       $v0, $v0, 0x1820
    ctx->pc = 0x1fd508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6176));
    // 0x1fd50c: 0x24631888  addiu       $v1, $v1, 0x1888
    ctx->pc = 0x1fd50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6280));
    // 0x1fd510: 0x25081908  addiu       $t0, $t0, 0x1908
    ctx->pc = 0x1fd510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6408));
    // 0x1fd514: 0x25291970  addiu       $t1, $t1, 0x1970
    ctx->pc = 0x1fd514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6512));
    // 0x1fd518: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x1fd518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x1fd51c: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x1fd51cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fd520: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x1fd520u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x1fd524: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1fd524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1fd528: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1fd528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1fd52c: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x1fd52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x1fd530: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x1fd530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x1fd534: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fd534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fd538: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fd538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fd53c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1fd53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1fd540: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1fd540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1fd544: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fd544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1fd548: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD548u;
        // 0x1fd54c: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD550u;
}
