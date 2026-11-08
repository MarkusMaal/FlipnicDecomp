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

// Function: entry_001082dc
// Address: 0x1082dc - 0x108364
void entry_001082dc_0x1082dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001082dc_0x1082dc");
#endif

    switch (ctx->pc) {
        case 0x10835cu: goto label_10835c;
        default: break;
    }

    ctx->pc = 0x1082dcu;

    // 0x1082dc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1082dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1082e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1082e4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1082E4u;
    {
        const bool branch_taken_0x1082e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082E4u;
        // 0x1082e8: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082e4) {
            ctx->pc = 0x108364u;
            return;
        }
    }
    ctx->pc = 0x1082ECu;
    // 0x1082ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1082ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1082f0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1082f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1082f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1082f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1082f8: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1082fc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1082fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108300: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x108300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x108304: 0x2442fd94  addiu       $v0, $v0, -0x26C
    ctx->pc = 0x108304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966676));
    // 0x108308: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x108308u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x10830c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x10830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x108310: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x108310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108314: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x108314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x108318: 0x2442fd98  addiu       $v0, $v0, -0x268
    ctx->pc = 0x108318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966680));
    // 0x10831c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x10831cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108320: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x108320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x108324: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x108324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108328: 0x2442fda4  addiu       $v0, $v0, -0x25C
    ctx->pc = 0x108328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966692));
    // 0x10832c: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x10832cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x108330: 0x3c02468c  lui         $v0, 0x468C
    ctx->pc = 0x108330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18060 << 16));
    // 0x108334: 0x3443a000  ori         $v1, $v0, 0xA000
    ctx->pc = 0x108334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x108338: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x108338u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x10833c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x108340: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x108340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x108344: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x108344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108348: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x108348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10834c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x10834cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x108350: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x108350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x108354: 0xc041ddc  jal         func_107770
    ctx->pc = 0x108354u;
    SET_GPR_U32(ctx, 31, 0x10835Cu);
    ctx->pc = 0x108358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108354u;
    // 0x108358: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107770u, 0x108354u, 0x10835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10835Cu;
label_10835c:
    // 0x10835c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10835Cu;
    {
        const bool branch_taken_0x10835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10835Cu;
        // 0x108360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10835c) {
            ctx->pc = 0x108378u;
            return;
        }
    }
    ctx->pc = 0x108364u;
}
