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

// Function: entry_001e3968
// Address: 0x1e3968 - 0x1e39d0
void entry_001e3968_0x1e3968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3968_0x1e3968");
#endif

    switch (ctx->pc) {
        case 0x1e39b4u: goto label_1e39b4;
        default: break;
    }

    ctx->pc = 0x1e3968u;

label_1e3968:
    // 0x1e3968: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x1e3968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_1e396c:
    // 0x1e396c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1e3970:
    if (ctx->pc == 0x1E3970u) {
        ctx->pc = 0x1E3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E396Cu;
        // 0x1e3970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3974u;
        goto label_1e3974;
    }
    ctx->pc = 0x1E396Cu;
    {
        const bool branch_taken_0x1e396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E396Cu;
        // 0x1e3970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e396c) {
            ctx->pc = 0x1E39E8u;
            return;
        }
    }
    ctx->pc = 0x1E3974u;
label_1e3974:
    // 0x1e3974: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3978:
    // 0x1e3978: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1e397c:
    if (ctx->pc == 0x1E397Cu) {
        ctx->pc = 0x1E3980u;
        goto label_1e3980;
    }
    ctx->pc = 0x1E3978u;
    {
        const bool branch_taken_0x1e3978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3978) {
            ctx->pc = 0x1E39E4u;
            return;
        }
    }
    ctx->pc = 0x1E3980u;
label_1e3980:
    // 0x1e3980: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e3980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e3984:
    // 0x1e3984: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e3988:
    // 0x1e3988: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e3988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e398c:
    // 0x1e398c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1e3990:
    if (ctx->pc == 0x1E3990u) {
        ctx->pc = 0x1E3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E398Cu;
        // 0x1e3990: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3994u;
        goto label_1e3994;
    }
    ctx->pc = 0x1E398Cu;
    {
        const bool branch_taken_0x1e398c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E398Cu;
        // 0x1e3990: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e398c) {
            ctx->pc = 0x1E39D4u;
            return;
        }
    }
    ctx->pc = 0x1E3994u;
label_1e3994:
    // 0x1e3994: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e3994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e3998:
    // 0x1e3998: 0x27c40060  addiu       $a0, $fp, 0x60
    ctx->pc = 0x1e3998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e399c:
    // 0x1e399c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e399cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e39a0:
    // 0x1e39a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e39a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e39a4:
    // 0x1e39a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e39a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e39a8:
    // 0x1e39a8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e39a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e39ac:
    // 0x1e39ac: 0x320f809  jalr        $t9
label_1e39b0:
    if (ctx->pc == 0x1E39B0u) {
        ctx->pc = 0x1E39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39ACu;
        // 0x1e39b0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39B4u;
        goto label_1e39b4;
    }
    ctx->pc = 0x1E39ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E39B4u);
        ctx->pc = 0x1E39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39ACu;
        // 0x1e39b0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E39ACu, 0x1E39B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E39B4u;
label_1e39b4:
    // 0x1e39b4: 0x27c30060  addiu       $v1, $fp, 0x60
    ctx->pc = 0x1e39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e39b8:
    // 0x1e39b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e39bc:
    // 0x1e39bc: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1e39bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1e39c0:
    // 0x1e39c0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e39c4:
    if (ctx->pc == 0x1E39C4u) {
        ctx->pc = 0x1E39C8u;
        goto label_1e39c8;
    }
    ctx->pc = 0x1E39C0u;
    {
        const bool branch_taken_0x1e39c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e39c0) {
            ctx->pc = 0x1E39D0u;
            return;
        }
    }
    ctx->pc = 0x1E39C8u;
label_1e39c8:
    // 0x1e39c8: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_1e39cc:
    if (ctx->pc == 0x1E39CCu) {
        ctx->pc = 0x1E39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39C8u;
        // 0x1e39cc: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39D0u;
        goto label_fallthrough_0x1e39c8;
    }
    ctx->pc = 0x1E39C8u;
    {
        const bool branch_taken_0x1e39c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39C8u;
        // 0x1e39cc: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39c8) {
            ctx->pc = 0x1E3D5Cu;
            return;
        }
    }
label_fallthrough_0x1e39c8:
    ctx->pc = 0x1E39D0u;
}
