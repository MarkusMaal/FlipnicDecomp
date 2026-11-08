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

// Function: entry_0018b3fc
// Address: 0x18b3fc - 0x18b438
void entry_0018b3fc_0x18b3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b3fc_0x18b3fc");
#endif

    switch (ctx->pc) {
        case 0x18b428u: goto label_18b428;
        case 0x18b434u: goto label_18b434;
        default: break;
    }

    ctx->pc = 0x18b3fcu;

    // 0x18b3fc: 0x151a40  sll         $v1, $s5, 9
    ctx->pc = 0x18b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x18b400: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x18b400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x18b404: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x18b404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18b408: 0x82630acc  lb          $v1, 0xACC($s3)
    ctx->pc = 0x18b408u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2764)));
    // 0x18b40c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18B40Cu;
    {
        const bool branch_taken_0x18b40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B40Cu;
        // 0x18b410: 0x26770acc  addiu       $s7, $s3, 0xACC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2764));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b40c) {
            ctx->pc = 0x18B438u;
            return;
        }
    }
    ctx->pc = 0x18B414u;
    // 0x18b414: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x18b414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x18b418: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x18b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x18b41c: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x18b41cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b420: 0xc077ca6  jal         func_1DF298
    ctx->pc = 0x18B420u;
    SET_GPR_U32(ctx, 31, 0x18B428u);
    ctx->pc = 0x18B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B420u;
    // 0x18b424: 0x8e842acc  lw          $a0, 0x2ACC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF298u, 0x18B420u, 0x18B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B428u;
label_18b428:
    // 0x18b428: 0x8e8408cc  lw          $a0, 0x8CC($s4)
    ctx->pc = 0x18b428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2252)));
    // 0x18b42c: 0xc046c14  jal         func_11B050
    ctx->pc = 0x18B42Cu;
    SET_GPR_U32(ctx, 31, 0x18B434u);
    ctx->pc = 0x18B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B42Cu;
    // 0x18b430: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x18B42Cu, 0x18B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B434u;
label_18b434:
    // 0x18b434: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x18b434u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18b438u;
}
