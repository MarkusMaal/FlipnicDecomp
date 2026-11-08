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

// Function: entry_0015f290
// Address: 0x15f290 - 0x15f2cc
void entry_0015f290_0x15f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f290_0x15f290");
#endif

    ctx->pc = 0x15f290u;

    // 0x15f290: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15f294: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x15f294u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15f298: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15f29c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f2a0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x15f2a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15f2a8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15f2ac: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F2ACu;
    {
        const bool branch_taken_0x15f2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2ACu;
        // 0x15f2b0: 0xa490022c  sh          $s0, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2ac) {
            ctx->pc = 0x15F2CCu;
            return;
        }
    }
    ctx->pc = 0x15F2B4u;
    // 0x15f2b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15f2b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15f2c0: 0x8c452cd8  lw          $a1, 0x2CD8($v0)
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15f2c4: 0xc05b698  jal         func_16DA60
    ctx->pc = 0x15F2C4u;
    SET_GPR_U32(ctx, 31, 0x15F2CCu);
    ctx->pc = 0x15F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F2C4u;
    // 0x15f2c8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15F2C4u, 0x15F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F2CCu;
}
