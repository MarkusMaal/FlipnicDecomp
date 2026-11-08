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

// Function: entry_0015f594
// Address: 0x15f594 - 0x15f5d4
void entry_0015f594_0x15f594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f594_0x15f594");
#endif

    ctx->pc = 0x15f594u;

    // 0x15f594: 0x0  nop
    ctx->pc = 0x15f594u;
    // NOP
    // 0x15f598: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15f59c: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x15f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15f5a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15f5a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f5a8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x15f5ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15f5b0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15f5b4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F5B4u;
    {
        const bool branch_taken_0x15f5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5B4u;
        // 0x15f5b8: 0xa490022c  sh          $s0, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5b4) {
            ctx->pc = 0x15F5D4u;
            return;
        }
    }
    ctx->pc = 0x15F5BCu;
    // 0x15f5bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15f5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f5c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15f5c8: 0x8c452cd8  lw          $a1, 0x2CD8($v0)
    ctx->pc = 0x15f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15f5cc: 0xc05b698  jal         func_16DA60
    ctx->pc = 0x15F5CCu;
    SET_GPR_U32(ctx, 31, 0x15F5D4u);
    ctx->pc = 0x15F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F5CCu;
    // 0x15f5d0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15F5CCu, 0x15F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5D4u;
}
