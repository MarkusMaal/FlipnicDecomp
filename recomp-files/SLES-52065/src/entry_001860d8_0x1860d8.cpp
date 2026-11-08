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

// Function: entry_001860d8
// Address: 0x1860d8 - 0x186168
void entry_001860d8_0x1860d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001860d8_0x1860d8");
#endif

    switch (ctx->pc) {
        case 0x1860ecu: goto label_1860ec;
        case 0x186108u: goto label_186108;
        case 0x186124u: goto label_186124;
        default: break;
    }

    ctx->pc = 0x1860d8u;

    // 0x1860d8: 0x8f8286d4  lw          $v0, -0x792C($gp)
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x1860dc: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x1860dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1860e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1860e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1860e4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1860E4u;
    SET_GPR_U32(ctx, 31, 0x1860ECu);
    ctx->pc = 0x1860E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860E4u;
    // 0x1860e8: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1860E4u, 0x1860ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860ECu;
label_1860ec:
    // 0x1860ec: 0x8f8386d4  lw          $v1, -0x792C($gp)
    ctx->pc = 0x1860ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x1860f0: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x1860f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1860f4: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1860f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1860f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1860f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1860fc: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1860fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x186100: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x186100u;
    SET_GPR_U32(ctx, 31, 0x186108u);
    ctx->pc = 0x186104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186100u;
    // 0x186104: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x186100u, 0x186108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186108u;
label_186108:
    // 0x186108: 0x8f8386d4  lw          $v1, -0x792C($gp)
    ctx->pc = 0x186108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x18610c: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x18610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x186110: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x186110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186114: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x186114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x186118: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18611c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x18611Cu;
    SET_GPR_U32(ctx, 31, 0x186124u);
    ctx->pc = 0x186120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18611Cu;
    // 0x186120: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x18611Cu, 0x186124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186124u;
label_186124:
    // 0x186124: 0x8f8486d4  lw          $a0, -0x792C($gp)
    ctx->pc = 0x186124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x186128: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x186128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18612c: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x18612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x186130: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x186130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x186134: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x186134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x186138: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x186138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18613c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x18613cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x186140: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x186144: 0x8f8486d4  lw          $a0, -0x792C($gp)
    ctx->pc = 0x186144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x186148: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x186148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18614c: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x18614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x186150: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x186150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x186154: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x186154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x186158: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x186158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x18615c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x18615cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x186160: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x186160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x186164: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->pc = 0x186168u;
}
