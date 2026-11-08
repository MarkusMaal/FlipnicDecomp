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

// Function: entry_0016ddd0
// Address: 0x16ddd0 - 0x16de24
void entry_0016ddd0_0x16ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ddd0_0x16ddd0");
#endif

    switch (ctx->pc) {
        case 0x16de0cu: goto label_16de0c;
        default: break;
    }

    ctx->pc = 0x16ddd0u;

    // 0x16ddd0: 0x8e630210  lw          $v1, 0x210($s3)
    ctx->pc = 0x16ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16ddd4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16ddd8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16dddc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16dde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dde4: 0x84420080  lh          $v0, 0x80($v0)
    ctx->pc = 0x16dde4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16dde8: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16DDE8u;
    {
        const bool branch_taken_0x16dde8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16dde8) {
            ctx->pc = 0x16DE24u;
            return;
        }
    }
    ctx->pc = 0x16DDF0u;
    // 0x16ddf0: 0x8f838608  lw          $v1, -0x79F8($gp)
    ctx->pc = 0x16ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x16ddf4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x16ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16ddf8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16ddfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ddfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16de00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16de04: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x16DE04u;
    SET_GPR_U32(ctx, 31, 0x16DE0Cu);
    ctx->pc = 0x16DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE04u;
    // 0x16de08: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x16DE04u, 0x16DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE0Cu;
label_16de0c:
    // 0x16de0c: 0x8e640210  lw          $a0, 0x210($s3)
    ctx->pc = 0x16de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16de10: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16de10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16de14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16de14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16de18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16de18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16de1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16de20: 0xa4620080  sh          $v0, 0x80($v1)
    ctx->pc = 0x16de20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16de24u;
}
