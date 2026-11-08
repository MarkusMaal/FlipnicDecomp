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

// Function: entry_00116b48
// Address: 0x116b48 - 0x116ba0
void entry_00116b48_0x116b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116b48_0x116b48");
#endif

    ctx->pc = 0x116b48u;

    // 0x116b48: 0x8f858010  lw          $a1, -0x7FF0($gp)
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x116b4c: 0x3c029d2c  lui         $v0, 0x9D2C
    ctx->pc = 0x116b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40236 << 16));
    // 0x116b50: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x116b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x116b54: 0x34445680  ori         $a0, $v0, 0x5680
    ctx->pc = 0x116b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22144);
    // 0x116b58: 0x24c6cce0  addiu       $a2, $a2, -0x3320
    ctx->pc = 0x116b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954208));
    // 0x116b5c: 0x3c03efc6  lui         $v1, 0xEFC6
    ctx->pc = 0x116b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61382 << 16));
    // 0x116b60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x116b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x116b64: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x116b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x116b68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x116b6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x116b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116b70: 0xaf858010  sw          $a1, -0x7FF0($gp)
    ctx->pc = 0x116b70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934544), GPR_U32(ctx, 5));
    // 0x116b74: 0x22ac2  srl         $a1, $v0, 11
    ctx->pc = 0x116b74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x116b78: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x116b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x116b7c: 0x229c0  sll         $a1, $v0, 7
    ctx->pc = 0x116b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x116b80: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x116b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x116b84: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x116b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x116b88: 0x223c0  sll         $a0, $v0, 15
    ctx->pc = 0x116b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x116b8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x116b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x116b90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x116b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x116b94: 0x21c82  srl         $v1, $v0, 18
    ctx->pc = 0x116b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 18));
    // 0x116b98: 0x3e00008  jr          $ra
    ctx->pc = 0x116B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B98u;
        // 0x116b9c: 0x431026  xor         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116BA0u;
}
