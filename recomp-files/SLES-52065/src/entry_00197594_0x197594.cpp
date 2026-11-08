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

// Function: entry_00197594
// Address: 0x197594 - 0x1975ec
void entry_00197594_0x197594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197594_0x197594");
#endif

    switch (ctx->pc) {
        case 0x19759cu: goto label_19759c;
        case 0x1975c8u: goto label_1975c8;
        case 0x1975d0u: goto label_1975d0;
        default: break;
    }

    ctx->pc = 0x197594u;

    // 0x197594: 0xc057f74  jal         func_15FDD0
    ctx->pc = 0x197594u;
    SET_GPR_U32(ctx, 31, 0x19759Cu);
    ctx->pc = 0x15FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDD0u, 0x197594u, 0x19759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19759Cu;
label_19759c:
    // 0x19759c: 0x4410030  bgez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x19759Cu;
    {
        const bool branch_taken_0x19759c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19759c) {
            ctx->pc = 0x197660u;
            return;
        }
    }
    ctx->pc = 0x1975A4u;
    // 0x1975a4: 0x8ea306ac  lw          $v1, 0x6AC($s5)
    ctx->pc = 0x1975a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1708)));
    // 0x1975a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1975a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1975ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1975acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1975b0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1975b4: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x1975b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
    // 0x1975b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1975b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1975bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1975bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1975c0: 0xc05a1b0  jal         func_1686C0
    ctx->pc = 0x1975C0u;
    SET_GPR_U32(ctx, 31, 0x1975C8u);
    ctx->pc = 0x1975C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975C0u;
    // 0x1975c4: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1686C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1686C0u, 0x1975C0u, 0x1975C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975C8u;
label_1975c8:
    // 0x1975c8: 0xc042688  jal         func_109A20
    ctx->pc = 0x1975C8u;
    SET_GPR_U32(ctx, 31, 0x1975D0u);
    ctx->pc = 0x1975CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975C8u;
    // 0x1975cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A20u, 0x1975C8u, 0x1975D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975D0u;
label_1975d0:
    // 0x1975d0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1975d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1975d4: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1975d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1975d8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1975D8u;
    {
        const bool branch_taken_0x1975d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1975DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975D8u;
        // 0x1975dc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975d8) {
            ctx->pc = 0x1975ECu;
            return;
        }
    }
    ctx->pc = 0x1975E0u;
    // 0x1975e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1975E0u;
    {
        const bool branch_taken_0x1975e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975E0u;
        // 0x1975e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975e0) {
            ctx->pc = 0x197604u;
            return;
        }
    }
    ctx->pc = 0x1975E8u;
    // 0x1975e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1975e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x1975ecu;
}
