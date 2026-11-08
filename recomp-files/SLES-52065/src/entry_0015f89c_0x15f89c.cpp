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

// Function: entry_0015f89c
// Address: 0x15f89c - 0x15f8dc
void entry_0015f89c_0x15f89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f89c_0x15f89c");
#endif

    ctx->pc = 0x15f89cu;

    // 0x15f89c: 0x0  nop
    ctx->pc = 0x15f89cu;
    // NOP
    // 0x15f8a0: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15f8a4: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x15f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15f8a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15f8ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f8b0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x15f8b4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15f8b8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15f8bc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F8BCu;
    {
        const bool branch_taken_0x15f8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8BCu;
        // 0x15f8c0: 0xa490022c  sh          $s0, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8bc) {
            ctx->pc = 0x15F8DCu;
            return;
        }
    }
    ctx->pc = 0x15F8C4u;
    // 0x15f8c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15f8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15f8d0: 0x8c452cd8  lw          $a1, 0x2CD8($v0)
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15f8d4: 0xc05b698  jal         func_16DA60
    ctx->pc = 0x15F8D4u;
    SET_GPR_U32(ctx, 31, 0x15F8DCu);
    ctx->pc = 0x15F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F8D4u;
    // 0x15f8d8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15F8D4u, 0x15F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F8DCu;
}
