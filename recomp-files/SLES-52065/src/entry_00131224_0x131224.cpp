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

// Function: entry_00131224
// Address: 0x131224 - 0x13127c
void entry_00131224_0x131224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131224_0x131224");
#endif

    switch (ctx->pc) {
        case 0x13126cu: goto label_13126c;
        case 0x131274u: goto label_131274;
        default: break;
    }

    ctx->pc = 0x131224u;

    // 0x131224: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x131224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x131228: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x131228u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x13122c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x13122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x131230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131234: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x131234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x131238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13123c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13123cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x131240: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x131240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x131244: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x131244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x131248: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x131248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13124c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131250: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x131250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x131254: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x131254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x131258: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x131258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13125c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13125Cu;
    {
        const bool branch_taken_0x13125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13125Cu;
        // 0x131260: 0x27a40088  addiu       $a0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13125c) {
            ctx->pc = 0x13127Cu;
            return;
        }
    }
    ctx->pc = 0x131264u;
    // 0x131264: 0xc04c4b0  jal         func_1312C0
    ctx->pc = 0x131264u;
    SET_GPR_U32(ctx, 31, 0x13126Cu);
    ctx->pc = 0x1312C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312C0u, 0x131264u, 0x13126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13126Cu;
label_13126c:
    // 0x13126c: 0xc04c4ac  jal         func_1312B0
    ctx->pc = 0x13126Cu;
    SET_GPR_U32(ctx, 31, 0x131274u);
    ctx->pc = 0x131270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13126Cu;
    // 0x131270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312B0u, 0x13126Cu, 0x131274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131274u;
label_131274:
    // 0x131274: 0xc0401a4  jal         func_100690
    ctx->pc = 0x131274u;
    SET_GPR_U32(ctx, 31, 0x13127Cu);
    ctx->pc = 0x131278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131274u;
    // 0x131278: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x131274u, 0x13127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13127Cu;
}
