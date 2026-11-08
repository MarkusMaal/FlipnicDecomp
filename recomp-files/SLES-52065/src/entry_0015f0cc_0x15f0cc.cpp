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

// Function: entry_0015f0cc
// Address: 0x15f0cc - 0x15f110
void entry_0015f0cc_0x15f0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f0cc_0x15f0cc");
#endif

    ctx->pc = 0x15f0ccu;

    // 0x15f0cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f0d0: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x15f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x15f0d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15f0d8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x15f0dc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15f0e0: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x15f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15f0e4: 0x84a40228  lh          $a0, 0x228($a1)
    ctx->pc = 0x15f0e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 552)));
    // 0x15f0e8: 0x10830280  beq         $a0, $v1, . + 4 + (0x280 << 2)
    ctx->pc = 0x15F0E8u;
    {
        const bool branch_taken_0x15f0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0E8u;
        // 0x15f0ec: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0e8) {
            ctx->pc = 0x15FAECu;
            return;
        }
    }
    ctx->pc = 0x15F0F0u;
    // 0x15f0f0: 0x1083027e  beq         $a0, $v1, . + 4 + (0x27E << 2)
    ctx->pc = 0x15F0F0u;
    {
        const bool branch_taken_0x15f0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f0f0) {
            ctx->pc = 0x15FAECu;
            return;
        }
    }
    ctx->pc = 0x15F0F8u;
    // 0x15f0f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f0fc: 0x10830277  beq         $a0, $v1, . + 4 + (0x277 << 2)
    ctx->pc = 0x15F0FCu;
    {
        const bool branch_taken_0x15f0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f0fc) {
            ctx->pc = 0x15FADCu;
            return;
        }
    }
    ctx->pc = 0x15F104u;
    // 0x15f104: 0x8cb70320  lw          $s7, 0x320($a1)
    ctx->pc = 0x15f104u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x15f108: 0x1000026e  b           . + 4 + (0x26E << 2)
    ctx->pc = 0x15F108u;
    {
        const bool branch_taken_0x15f108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f108) {
            ctx->pc = 0x15FAC4u;
            return;
        }
    }
    ctx->pc = 0x15F110u;
}
