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

// Function: entry_001e49d8
// Address: 0x1e49d8 - 0x1e4a40
void entry_001e49d8_0x1e49d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e49d8_0x1e49d8");
#endif

    switch (ctx->pc) {
        case 0x1e4a24u: goto label_1e4a24;
        default: break;
    }

    ctx->pc = 0x1e49d8u;

label_1e49d8:
    // 0x1e49d8: 0x92220052  lbu         $v0, 0x52($s1)
    ctx->pc = 0x1e49d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_1e49dc:
    // 0x1e49dc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1e49e0:
    if (ctx->pc == 0x1E49E0u) {
        ctx->pc = 0x1E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49DCu;
        // 0x1e49e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49E4u;
        goto label_1e49e4;
    }
    ctx->pc = 0x1E49DCu;
    {
        const bool branch_taken_0x1e49dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49DCu;
        // 0x1e49e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49dc) {
            ctx->pc = 0x1E4A58u;
            return;
        }
    }
    ctx->pc = 0x1E49E4u;
label_1e49e4:
    // 0x1e49e4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e49e8:
    // 0x1e49e8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1e49ec:
    if (ctx->pc == 0x1E49ECu) {
        ctx->pc = 0x1E49F0u;
        goto label_1e49f0;
    }
    ctx->pc = 0x1E49E8u;
    {
        const bool branch_taken_0x1e49e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e49e8) {
            ctx->pc = 0x1E4A54u;
            return;
        }
    }
    ctx->pc = 0x1E49F0u;
label_1e49f0:
    // 0x1e49f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e49f4:
    // 0x1e49f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e49f8:
    // 0x1e49f8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e49f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e49fc:
    // 0x1e49fc: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1e4a00:
    if (ctx->pc == 0x1E4A00u) {
        ctx->pc = 0x1E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49FCu;
        // 0x1e4a00: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A04u;
        goto label_1e4a04;
    }
    ctx->pc = 0x1E49FCu;
    {
        const bool branch_taken_0x1e49fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49FCu;
        // 0x1e4a00: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49fc) {
            ctx->pc = 0x1E4A44u;
            return;
        }
    }
    ctx->pc = 0x1E4A04u;
label_1e4a04:
    // 0x1e4a04: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e4a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4a08:
    // 0x1e4a08: 0x27c40060  addiu       $a0, $fp, 0x60
    ctx->pc = 0x1e4a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e4a0c:
    // 0x1e4a0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a10:
    // 0x1e4a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a14:
    // 0x1e4a14: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e4a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4a18:
    // 0x1e4a18: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e4a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e4a1c:
    // 0x1e4a1c: 0x320f809  jalr        $t9
label_1e4a20:
    if (ctx->pc == 0x1E4A20u) {
        ctx->pc = 0x1E4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A1Cu;
        // 0x1e4a20: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A24u;
        goto label_1e4a24;
    }
    ctx->pc = 0x1E4A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4A24u);
        ctx->pc = 0x1E4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A1Cu;
        // 0x1e4a20: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4A1Cu, 0x1E4A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4A24u;
label_1e4a24:
    // 0x1e4a24: 0x27c30060  addiu       $v1, $fp, 0x60
    ctx->pc = 0x1e4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_1e4a28:
    // 0x1e4a28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4a2c:
    // 0x1e4a2c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1e4a2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4a30:
    // 0x1e4a30: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e4a34:
    if (ctx->pc == 0x1E4A34u) {
        ctx->pc = 0x1E4A38u;
        goto label_1e4a38;
    }
    ctx->pc = 0x1E4A30u;
    {
        const bool branch_taken_0x1e4a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4a30) {
            ctx->pc = 0x1E4A40u;
            return;
        }
    }
    ctx->pc = 0x1E4A38u;
label_1e4a38:
    // 0x1e4a38: 0x100000fe  b           . + 4 + (0xFE << 2)
label_1e4a3c:
    if (ctx->pc == 0x1E4A3Cu) {
        ctx->pc = 0x1E4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A38u;
        // 0x1e4a3c: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A40u;
        goto label_fallthrough_0x1e4a38;
    }
    ctx->pc = 0x1E4A38u;
    {
        const bool branch_taken_0x1e4a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A38u;
        // 0x1e4a3c: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a38) {
            ctx->pc = 0x1E4E34u;
            return;
        }
    }
label_fallthrough_0x1e4a38:
    ctx->pc = 0x1E4A40u;
}
