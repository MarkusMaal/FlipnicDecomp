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

// Function: entry_0018dcc8
// Address: 0x18dcc8 - 0x18dd7c
void entry_0018dcc8_0x18dcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dcc8_0x18dcc8");
#endif

    switch (ctx->pc) {
        case 0x18dcd0u: goto label_18dcd0;
        case 0x18dce0u: goto label_18dce0;
        case 0x18dce8u: goto label_18dce8;
        case 0x18dcf8u: goto label_18dcf8;
        case 0x18dd24u: goto label_18dd24;
        case 0x18dd38u: goto label_18dd38;
        case 0x18dd4cu: goto label_18dd4c;
        case 0x18dd64u: goto label_18dd64;
        default: break;
    }

    ctx->pc = 0x18dcc8u;

    // 0x18dcc8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18DCC8u;
    SET_GPR_U32(ctx, 31, 0x18DCD0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DCC8u, 0x18DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCD0u;
label_18dcd0:
    // 0x18dcd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcd4: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x18dcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x18dcd8: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18DCD8u;
    SET_GPR_U32(ctx, 31, 0x18DCE0u);
    ctx->pc = 0x18DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCD8u;
    // 0x18dcdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18DCD8u, 0x18DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCE0u;
label_18dce0:
    // 0x18dce0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18DCE0u;
    SET_GPR_U32(ctx, 31, 0x18DCE8u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DCE0u, 0x18DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCE8u;
label_18dce8:
    // 0x18dce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcec: 0x240500ed  addiu       $a1, $zero, 0xED
    ctx->pc = 0x18dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x18dcf0: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18DCF0u;
    SET_GPR_U32(ctx, 31, 0x18DCF8u);
    ctx->pc = 0x18DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCF0u;
    // 0x18dcf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18DCF0u, 0x18DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCF8u;
label_18dcf8:
    // 0x18dcf8: 0x8e220474  lw          $v0, 0x474($s1)
    ctx->pc = 0x18dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
    // 0x18dcfc: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18DCFCu;
    {
        const bool branch_taken_0x18dcfc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCFCu;
        // 0x18dd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcfc) {
            ctx->pc = 0x18DD80u;
            return;
        }
    }
    ctx->pc = 0x18DD04u;
    // 0x18dd04: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18dd08: 0x8e22271c  lw          $v0, 0x271C($s1)
    ctx->pc = 0x18dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
    // 0x18dd0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18dd10: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18DD10u;
    {
        const bool branch_taken_0x18dd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dd10) {
            ctx->pc = 0x18DD7Cu;
            return;
        }
    }
    ctx->pc = 0x18DD18u;
    // 0x18dd18: 0xae2005b0  sw          $zero, 0x5B0($s1)
    ctx->pc = 0x18dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 0));
    // 0x18dd1c: 0xc058018  jal         func_160060
    ctx->pc = 0x18DD1Cu;
    SET_GPR_U32(ctx, 31, 0x18DD24u);
    ctx->pc = 0x18DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD1Cu;
    // 0x18dd20: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x18DD1Cu, 0x18DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD24u;
label_18dd24:
    // 0x18dd24: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x18dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x18dd28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dd2c: 0xaf83831c  sw          $v1, -0x7CE4($gp)
    ctx->pc = 0x18dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 3));
    // 0x18dd30: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x18DD30u;
    SET_GPR_U32(ctx, 31, 0x18DD38u);
    ctx->pc = 0x18DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD30u;
    // 0x18dd34: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18DD30u, 0x18DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD38u;
label_18dd38:
    // 0x18dd38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18dd38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd3c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x18DD3Cu;
    {
        const bool branch_taken_0x18dd3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD3Cu;
        // 0x18dd40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd3c) {
            ctx->pc = 0x18DD7Cu;
            return;
        }
    }
    ctx->pc = 0x18DD44u;
    // 0x18dd44: 0xc064bb8  jal         func_192EE0
    ctx->pc = 0x18DD44u;
    SET_GPR_U32(ctx, 31, 0x18DD4Cu);
    ctx->pc = 0x192EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192EE0u, 0x18DD44u, 0x18DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD4Cu;
label_18dd4c:
    // 0x18dd4c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18dd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18dd50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dd54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18dd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd58: 0x24a5fd50  addiu       $a1, $a1, -0x2B0
    ctx->pc = 0x18dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966608));
    // 0x18dd5c: 0xc064a64  jal         func_192990
    ctx->pc = 0x18DD5Cu;
    SET_GPR_U32(ctx, 31, 0x18DD64u);
    ctx->pc = 0x18DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD5Cu;
    // 0x18dd60: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x18DD5Cu, 0x18DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD64u;
label_18dd64:
    // 0x18dd64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18dd68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18dd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd6c: 0x24a5fd50  addiu       $a1, $a1, -0x2B0
    ctx->pc = 0x18dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966608));
    // 0x18dd70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dd74: 0xc064a64  jal         func_192990
    ctx->pc = 0x18DD74u;
    SET_GPR_U32(ctx, 31, 0x18DD7Cu);
    ctx->pc = 0x18DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD74u;
    // 0x18dd78: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x18DD74u, 0x18DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD7Cu;
}
