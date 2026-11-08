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

// Function: entry_001976b8
// Address: 0x1976b8 - 0x197730
void entry_001976b8_0x1976b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001976b8_0x1976b8");
#endif

    switch (ctx->pc) {
        case 0x197718u: goto label_197718;
        case 0x197728u: goto label_197728;
        default: break;
    }

    ctx->pc = 0x1976b8u;

    // 0x1976b8: 0x8c650680  lw          $a1, 0x680($v1)
    ctx->pc = 0x1976b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1664)));
    // 0x1976bc: 0x18a00026  blez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1976BCu;
    {
        const bool branch_taken_0x1976bc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1976C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976BCu;
        // 0x1976c0: 0x24660680  addiu       $a2, $v1, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976bc) {
            ctx->pc = 0x197758u;
            return;
        }
    }
    ctx->pc = 0x1976C4u;
    // 0x1976c4: 0x8c640674  lw          $a0, 0x674($v1)
    ctx->pc = 0x1976c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
    // 0x1976c8: 0x24670674  addiu       $a3, $v1, 0x674
    ctx->pc = 0x1976c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1652));
    // 0x1976cc: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1976ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1976d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1976d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1976d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1976d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1976d8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1976d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1976dc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1976dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1976e0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1976E0u;
    {
        const bool branch_taken_0x1976e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976E0u;
        // 0x1976e4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976e0) {
            ctx->pc = 0x197758u;
            return;
        }
    }
    ctx->pc = 0x1976E8u;
    // 0x1976e8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1976e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1976ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1976ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1976f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1976f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1976f4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1976F4u;
    {
        const bool branch_taken_0x1976f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1976f4) {
            ctx->pc = 0x197730u;
            return;
        }
    }
    ctx->pc = 0x1976FCu;
    // 0x1976fc: 0x8ea306d0  lw          $v1, 0x6D0($s5)
    ctx->pc = 0x1976fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
    // 0x197700: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x197700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x197704: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x197704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x197708: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x197708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x19770c: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x19770cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x197710: 0xc064b08  jal         func_192C20
    ctx->pc = 0x197710u;
    SET_GPR_U32(ctx, 31, 0x197718u);
    ctx->pc = 0x197714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197710u;
    // 0x197714: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x197710u, 0x197718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197718u;
label_197718:
    // 0x197718: 0x8ea206d0  lw          $v0, 0x6D0($s5)
    ctx->pc = 0x197718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
    // 0x19771c: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x197720: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x197720u;
    SET_GPR_U32(ctx, 31, 0x197728u);
    ctx->pc = 0x197724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197720u;
    // 0x197724: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x197720u, 0x197728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197728u;
label_197728:
    // 0x197728: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x197728u;
    {
        const bool branch_taken_0x197728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197728) {
            ctx->pc = 0x197758u;
            return;
        }
    }
    ctx->pc = 0x197730u;
}
