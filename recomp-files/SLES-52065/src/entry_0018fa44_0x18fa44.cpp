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

// Function: entry_0018fa44
// Address: 0x18fa44 - 0x18faa8
void entry_0018fa44_0x18fa44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fa44_0x18fa44");
#endif

    switch (ctx->pc) {
        case 0x18faa0u: goto label_18faa0;
        default: break;
    }

    ctx->pc = 0x18fa44u;

label_18fa44:
    // 0x18fa44: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x18fa44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_18fa48:
    // 0x18fa48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_18fa4c:
    // 0x18fa4c: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x18fa4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_18fa50:
    // 0x18fa50: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x18fa50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_18fa54:
    // 0x18fa54: 0x93140  sll         $a2, $t1, 5
    ctx->pc = 0x18fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_18fa58:
    // 0x18fa58: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x18fa58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_18fa5c:
    // 0x18fa5c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x18fa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18fa60:
    // 0x18fa60: 0x8d070034  lw          $a3, 0x34($t0)
    ctx->pc = 0x18fa60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
label_18fa64:
    // 0x18fa64: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18fa64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_18fa68:
    // 0x18fa68: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x18fa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_18fa6c:
    // 0x18fa6c: 0x8cc60054  lw          $a2, 0x54($a2)
    ctx->pc = 0x18fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_18fa70:
    // 0x18fa70: 0x10c40024  beq         $a2, $a0, . + 4 + (0x24 << 2)
label_18fa74:
    if (ctx->pc == 0x18FA74u) {
        ctx->pc = 0x18FA78u;
        goto label_18fa78;
    }
    ctx->pc = 0x18FA70u;
    {
        const bool branch_taken_0x18fa70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x18fa70) {
            ctx->pc = 0x18FB04u;
            return;
        }
    }
    ctx->pc = 0x18FA78u;
label_18fa78:
    // 0x18fa78: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x18fa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_18fa7c:
    // 0x18fa7c: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
label_18fa80:
    if (ctx->pc == 0x18FA80u) {
        ctx->pc = 0x18FA84u;
        goto label_18fa84;
    }
    ctx->pc = 0x18FA7Cu;
    {
        const bool branch_taken_0x18fa7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18fa7c) {
            ctx->pc = 0x18FAA8u;
            return;
        }
    }
    ctx->pc = 0x18FA84u;
label_18fa84:
    // 0x18fa84: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_18fa88:
    if (ctx->pc == 0x18FA88u) {
        ctx->pc = 0x18FA8Cu;
        goto label_18fa8c;
    }
    ctx->pc = 0x18FA84u;
    {
        const bool branch_taken_0x18fa84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fa84) {
            ctx->pc = 0x18FB04u;
            return;
        }
    }
    ctx->pc = 0x18FA8Cu;
label_18fa8c:
    // 0x18fa8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18fa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18fa90:
    // 0x18fa90: 0x8c99031c  lw          $t9, 0x31C($a0)
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
label_18fa94:
    // 0x18fa94: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x18fa94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_18fa98:
    // 0x18fa98: 0x320f809  jalr        $t9
label_18fa9c:
    if (ctx->pc == 0x18FA9Cu) {
        ctx->pc = 0x18FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA98u;
        // 0x18fa9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAA0u;
        goto label_18faa0;
    }
    ctx->pc = 0x18FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FAA0u);
        ctx->pc = 0x18FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA98u;
        // 0x18fa9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA98u, 0x18FAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FAA0u;
label_18faa0:
    // 0x18faa0: 0x10000019  b           . + 4 + (0x19 << 2)
label_18faa4:
    if (ctx->pc == 0x18FAA4u) {
        ctx->pc = 0x18FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAA0u;
        // 0x18faa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAA8u;
        goto label_fallthrough_0x18faa0;
    }
    ctx->pc = 0x18FAA0u;
    {
        const bool branch_taken_0x18faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAA0u;
        // 0x18faa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18faa0) {
            ctx->pc = 0x18FB08u;
            return;
        }
    }
label_fallthrough_0x18faa0:
    ctx->pc = 0x18FAA8u;
}
