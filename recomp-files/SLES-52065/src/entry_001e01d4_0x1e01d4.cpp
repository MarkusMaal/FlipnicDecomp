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

// Function: entry_001e01d4
// Address: 0x1e01d4 - 0x1e022c
void entry_001e01d4_0x1e01d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e01d4_0x1e01d4");
#endif

    switch (ctx->pc) {
        case 0x1e01f0u: goto label_1e01f0;
        case 0x1e01fcu: goto label_1e01fc;
        default: break;
    }

    ctx->pc = 0x1e01d4u;

    // 0x1e01d4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e01d8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1e01d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e01dc: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x1e01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
    // 0x1e01e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e01e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01e4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e01e8: 0xc0758b0  jal         func_1D62C0
    ctx->pc = 0x1E01E8u;
    SET_GPR_U32(ctx, 31, 0x1E01F0u);
    ctx->pc = 0x1E01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01E8u;
    // 0x1e01ec: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D62C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D62C0u, 0x1E01E8u, 0x1E01F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01F0u;
label_1e01f0:
    // 0x1e01f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e01f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01f4: 0xc080664  jal         func_201990
    ctx->pc = 0x1E01F4u;
    SET_GPR_U32(ctx, 31, 0x1E01FCu);
    ctx->pc = 0x1E01F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01F4u;
    // 0x1e01f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1E01F4u, 0x1E01FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01FCu;
label_1e01fc:
    // 0x1e01fc: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1e01fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e0200: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1e0200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1e0204: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1e0204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e0208: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x1e0208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1e020c: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x1e020cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1e0210: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x1e0210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1e0214: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x1e0214u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e0218: 0xdfb70238  ld          $s7, 0x238($sp)
    ctx->pc = 0x1e0218u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e021c: 0xdfbe0240  ld          $fp, 0x240($sp)
    ctx->pc = 0x1e021cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1e0220: 0xdfbf0248  ld          $ra, 0x248($sp)
    ctx->pc = 0x1e0220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1e0224: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0224u;
        // 0x1e0228: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E022Cu;
}
