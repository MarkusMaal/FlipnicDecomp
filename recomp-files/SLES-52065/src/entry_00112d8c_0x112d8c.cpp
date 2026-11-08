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

// Function: entry_00112d8c
// Address: 0x112d8c - 0x112dd8
void entry_00112d8c_0x112d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112d8c_0x112d8c");
#endif

    switch (ctx->pc) {
        case 0x112dd0u: goto label_112dd0;
        default: break;
    }

    ctx->pc = 0x112d8cu;

    // 0x112d8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112d90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112d94: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x112d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112d98: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x112d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x112d9c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x112d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112da0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x112da4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x112da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112da8: 0x8c722cd8  lw          $s2, 0x2CD8($v1)
    ctx->pc = 0x112da8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x112dac: 0x92430220  lbu         $v1, 0x220($s2)
    ctx->pc = 0x112dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x112db0: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x112DB0u;
    {
        const bool branch_taken_0x112db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x112db0) {
            ctx->pc = 0x112DE8u;
            return;
        }
    }
    ctx->pc = 0x112DB8u;
    // 0x112db8: 0xa2450220  sb          $a1, 0x220($s2)
    ctx->pc = 0x112db8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 544), (uint8_t)GPR_U32(ctx, 5));
    // 0x112dbc: 0x92420220  lbu         $v0, 0x220($s2)
    ctx->pc = 0x112dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x112dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112DC0u;
    {
        const bool branch_taken_0x112dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DC0u;
        // 0x112dc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dc0) {
            ctx->pc = 0x112DD8u;
            return;
        }
    }
    ctx->pc = 0x112DC8u;
    // 0x112dc8: 0xc042570  jal         func_1095C0
    ctx->pc = 0x112DC8u;
    SET_GPR_U32(ctx, 31, 0x112DD0u);
    ctx->pc = 0x112DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DC8u;
    // 0x112dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x112DC8u, 0x112DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DD0u;
label_112dd0:
    // 0x112dd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112DD0u;
    {
        const bool branch_taken_0x112dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DD0u;
        // 0x112dd4: 0xa24001d3  sb          $zero, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dd0) {
            ctx->pc = 0x112DE8u;
            return;
        }
    }
    ctx->pc = 0x112DD8u;
}
