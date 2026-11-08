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

// Function: entry_001965d8
// Address: 0x1965d8 - 0x196614
void entry_001965d8_0x1965d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001965d8_0x1965d8");
#endif

    switch (ctx->pc) {
        case 0x1965d8u: goto label_1965d8;
        case 0x1965dcu: goto label_1965dc;
        case 0x1965e0u: goto label_1965e0;
        case 0x1965e4u: goto label_1965e4;
        case 0x1965e8u: goto label_1965e8;
        case 0x1965ecu: goto label_1965ec;
        case 0x1965f0u: goto label_1965f0;
        case 0x1965f4u: goto label_1965f4;
        case 0x1965f8u: goto label_1965f8;
        case 0x1965fcu: goto label_1965fc;
        case 0x196600u: goto label_196600;
        case 0x196604u: goto label_196604;
        case 0x196608u: goto label_196608;
        case 0x19660cu: goto label_19660c;
        case 0x196610u: goto label_196610;
        default: break;
    }

    ctx->pc = 0x1965d8u;

label_1965d8:
    // 0x1965d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1965d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1965dc:
    // 0x1965dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1965dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1965e0:
    // 0x1965e0: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x1965e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_1965e4:
    // 0x1965e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1965e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1965e8:
    // 0x1965e8: 0xc064a64  jal         func_192990
label_1965ec:
    if (ctx->pc == 0x1965ECu) {
        ctx->pc = 0x1965ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965E8u;
        // 0x1965ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1965F0u;
        goto label_1965f0;
    }
    ctx->pc = 0x1965E8u;
    SET_GPR_U32(ctx, 31, 0x1965F0u);
    ctx->pc = 0x1965ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1965E8u;
    // 0x1965ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x1965E8u, 0x1965F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965F0u;
label_1965f0:
    // 0x1965f0: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
label_1965f4:
    if (ctx->pc == 0x1965F4u) {
        ctx->pc = 0x1965F8u;
        goto label_1965f8;
    }
    ctx->pc = 0x1965F0u;
    {
        const bool branch_taken_0x1965f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965f0) {
            ctx->pc = 0x196688u;
            return;
        }
    }
    ctx->pc = 0x1965F8u;
label_1965f8:
    // 0x1965f8: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1965f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1965fc:
    // 0x1965fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1965fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_196600:
    // 0x196600: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x196600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_196604:
    // 0x196604: 0x320f809  jalr        $t9
label_196608:
    if (ctx->pc == 0x196608u) {
        ctx->pc = 0x196608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196604u;
        // 0x196608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19660Cu;
        goto label_19660c;
    }
    ctx->pc = 0x196604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19660Cu);
        ctx->pc = 0x196608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196604u;
        // 0x196608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196604u, 0x19660Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19660Cu;
label_19660c:
    // 0x19660c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_196610:
    if (ctx->pc == 0x196610u) {
        ctx->pc = 0x196610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19660Cu;
        // 0x196610: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196614u;
        goto label_fallthrough_0x19660c;
    }
    ctx->pc = 0x19660Cu;
    {
        const bool branch_taken_0x19660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19660Cu;
        // 0x196610: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19660c) {
            ctx->pc = 0x19668Cu;
            return;
        }
    }
label_fallthrough_0x19660c:
    ctx->pc = 0x196614u;
}
