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

// Function: entry_001ec090
// Address: 0x1ec090 - 0x1ec0c0
void entry_001ec090_0x1ec090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec090_0x1ec090");
#endif

    switch (ctx->pc) {
        case 0x1ec0a4u: goto label_1ec0a4;
        default: break;
    }

    ctx->pc = 0x1ec090u;

    // 0x1ec090: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1ec090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1ec094: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1ec094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1ec098: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1ec098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1ec09c: 0xc07afec  jal         func_1EBFB0
    ctx->pc = 0x1EC09Cu;
    SET_GPR_U32(ctx, 31, 0x1EC0A4u);
    ctx->pc = 0x1EC0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC09Cu;
    // 0x1ec0a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFB0u, 0x1EC09Cu, 0x1EC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC0A4u;
label_1ec0a4:
    // 0x1ec0a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC0A4u;
    {
        const bool branch_taken_0x1ec0a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0A4u;
        // 0x1ec0a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0a4) {
            ctx->pc = 0x1EC0C0u;
            return;
        }
    }
    ctx->pc = 0x1EC0ACu;
    // 0x1ec0ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ec0acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec0b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ec0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec0b8: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1EC0B8u;
    ctx->pc = 0x1EC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC0B8u;
    // 0x1ec0bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1EC0C0u;
}
