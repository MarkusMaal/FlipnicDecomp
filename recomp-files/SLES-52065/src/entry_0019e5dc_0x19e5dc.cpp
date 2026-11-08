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

// Function: entry_0019e5dc
// Address: 0x19e5dc - 0x19e654
void entry_0019e5dc_0x19e5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e5dc_0x19e5dc");
#endif

    switch (ctx->pc) {
        case 0x19e634u: goto label_19e634;
        case 0x19e64cu: goto label_19e64c;
        default: break;
    }

    ctx->pc = 0x19e5dcu;

label_19e5dc:
    // 0x19e5dc: 0x8ca30874  lw          $v1, 0x874($a1)
    ctx->pc = 0x19e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2164)));
label_19e5e0:
    // 0x19e5e0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_19e5e4:
    if (ctx->pc == 0x19E5E4u) {
        ctx->pc = 0x19E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5E0u;
        // 0x19e5e4: 0x24b30874  addiu       $s3, $a1, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 2164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5E8u;
        goto label_19e5e8;
    }
    ctx->pc = 0x19E5E0u;
    {
        const bool branch_taken_0x19e5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5E0u;
        // 0x19e5e4: 0x24b30874  addiu       $s3, $a1, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 2164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5e0) {
            ctx->pc = 0x19E65Cu;
            return;
        }
    }
    ctx->pc = 0x19E5E8u;
label_19e5e8:
    // 0x19e5e8: 0x8ca40674  lw          $a0, 0x674($a1)
    ctx->pc = 0x19e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1652)));
label_19e5ec:
    // 0x19e5ec: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19e5f0:
    // 0x19e5f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19e5f4:
    // 0x19e5f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19e5f8:
    // 0x19e5f8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19e5fc:
    // 0x19e5fc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_19e600:
    // 0x19e600: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_19e604:
    if (ctx->pc == 0x19E604u) {
        ctx->pc = 0x19E608u;
        goto label_19e608;
    }
    ctx->pc = 0x19E600u;
    {
        const bool branch_taken_0x19e600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e600) {
            ctx->pc = 0x19E654u;
            return;
        }
    }
    ctx->pc = 0x19E608u;
label_19e608:
    // 0x19e608: 0x8ca30774  lw          $v1, 0x774($a1)
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_19e60c:
    // 0x19e60c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19e610:
    // 0x19e610: 0xaca30774  sw          $v1, 0x774($a1)
    ctx->pc = 0x19e610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1908), GPR_U32(ctx, 3));
label_19e614:
    // 0x19e614: 0x8ca30974  lw          $v1, 0x974($a1)
    ctx->pc = 0x19e614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2420)));
label_19e618:
    // 0x19e618: 0x8ca40774  lw          $a0, 0x774($a1)
    ctx->pc = 0x19e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_19e61c:
    // 0x19e61c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x19e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19e620:
    // 0x19e620: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x19e620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19e624:
    // 0x19e624: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_19e628:
    if (ctx->pc == 0x19E628u) {
        ctx->pc = 0x19E62Cu;
        goto label_19e62c;
    }
    ctx->pc = 0x19E624u;
    {
        const bool branch_taken_0x19e624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e624) {
            ctx->pc = 0x19E654u;
            return;
        }
    }
    ctx->pc = 0x19E62Cu;
label_19e62c:
    // 0x19e62c: 0xc04bf44  jal         func_12FD10
label_19e630:
    if (ctx->pc == 0x19E630u) {
        ctx->pc = 0x19E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E62Cu;
        // 0x19e630: 0x24a40974  addiu       $a0, $a1, 0x974 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E634u;
        goto label_19e634;
    }
    ctx->pc = 0x19E62Cu;
    SET_GPR_U32(ctx, 31, 0x19E634u);
    ctx->pc = 0x19E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E62Cu;
    // 0x19e630: 0x24a40974  addiu       $a0, $a1, 0x974 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x19E62Cu, 0x19E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E634u;
label_19e634:
    // 0x19e634: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x19e634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19e638:
    // 0x19e638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e63c:
    // 0x19e63c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e640:
    // 0x19e640: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19e640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19e644:
    // 0x19e644: 0x320f809  jalr        $t9
label_19e648:
    if (ctx->pc == 0x19E648u) {
        ctx->pc = 0x19E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E644u;
        // 0x19e648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E64Cu;
        goto label_19e64c;
    }
    ctx->pc = 0x19E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E64Cu);
        ctx->pc = 0x19E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E644u;
        // 0x19e648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E644u, 0x19E64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E64Cu;
label_19e64c:
    // 0x19e64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e650:
    // 0x19e650: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x19e650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19e654u;
}
