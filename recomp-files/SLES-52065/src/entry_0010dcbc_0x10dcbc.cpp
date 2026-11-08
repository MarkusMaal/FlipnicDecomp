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

// Function: entry_0010dcbc
// Address: 0x10dcbc - 0x10dd14
void entry_0010dcbc_0x10dcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dcbc_0x10dcbc");
#endif

    switch (ctx->pc) {
        case 0x10dcccu: goto label_10dccc;
        default: break;
    }

    ctx->pc = 0x10dcbcu;

label_10dcbc:
    // 0x10dcbc: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x10dcbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10dcc0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10dcc4: 0xc057040  jal         func_15C100
    ctx->pc = 0x10DCC4u;
    SET_GPR_U32(ctx, 31, 0x10DCCCu);
    ctx->pc = 0x10DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCC4u;
    // 0x10dcc8: 0x86050002  lh          $a1, 0x2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x10DCC4u, 0x10DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCCCu;
label_10dccc:
    // 0x10dccc: 0x8e840210  lw          $a0, 0x210($s4)
    ctx->pc = 0x10dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 528)));
    // 0x10dcd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10dcd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10dcd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10dcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dcd8: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x10dcd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10dcdc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10dcdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10dce0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x10dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x10dce4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x10dce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x10dce8: 0x8e850210  lw          $a1, 0x210($s4)
    ctx->pc = 0x10dce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 528)));
    // 0x10dcec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10dcf0: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x10dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x10dcf4: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x10dcf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10dcf8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x10dcf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x10dcfc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10dd00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10dd04: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x10dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x10dd08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x10dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10dd0c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x10DD0Cu;
    {
        const bool branch_taken_0x10dd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD0Cu;
        // 0x10dd10: 0xa0860028  sb          $a2, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd0c) {
            ctx->pc = 0x10DCBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dcbc;
        }
    }
    ctx->pc = 0x10DD14u;
}
