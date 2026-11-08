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

// Function: FUN_001f51c0
// Address: 0x1f51c0 - 0x1f5270
void FUN_001f51c0_0x1f51c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f51c0_0x1f51c0");
#endif

    switch (ctx->pc) {
        case 0x1f51f4u: goto label_1f51f4;
        case 0x1f5208u: goto label_1f5208;
        case 0x1f5214u: goto label_1f5214;
        case 0x1f5224u: goto label_1f5224;
        case 0x1f5234u: goto label_1f5234;
        case 0x1f5244u: goto label_1f5244;
        case 0x1f5250u: goto label_1f5250;
        default: break;
    }

    ctx->pc = 0x1f51c0u;

    // 0x1f51c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f51c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f51c4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1f51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1f51c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f51c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51cc: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x1f51ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x1f51d0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1f51d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1f51d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f51d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51d8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1f51d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x1f51dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f51dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51e0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f51e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51e4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1f51e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1f51e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f51e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f51ec: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x1F51ECu;
    SET_GPR_U32(ctx, 31, 0x1F51F4u);
    ctx->pc = 0x1F51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51ECu;
    // 0x1f51f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1F51ECu, 0x1F51F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F51F4u;
label_1f51f4:
    // 0x1f51f4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1f51f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f51f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f51f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f51fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5200: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x1F5200u;
    SET_GPR_U32(ctx, 31, 0x1F5208u);
    ctx->pc = 0x1F5204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5200u;
    // 0x1f5204: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x1F5200u, 0x1F5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5208u;
label_1f5208:
    // 0x1f5208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f520c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1F520Cu;
    SET_GPR_U32(ctx, 31, 0x1F5214u);
    ctx->pc = 0x1F5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F520Cu;
    // 0x1f5210: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1F520Cu, 0x1F5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5214u;
label_1f5214:
    // 0x1f5214: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f5214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5218: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f5218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f521c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1F521Cu;
    SET_GPR_U32(ctx, 31, 0x1F5224u);
    ctx->pc = 0x1F5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F521Cu;
    // 0x1f5220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1F521Cu, 0x1F5224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5224u;
label_1f5224:
    // 0x1f5224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5228: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f5228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f522c: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x1F522Cu;
    SET_GPR_U32(ctx, 31, 0x1F5234u);
    ctx->pc = 0x1F5230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F522Cu;
    // 0x1f5230: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x1F522Cu, 0x1F5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5234u;
label_1f5234:
    // 0x1f5234: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f5234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5238: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f523c: 0xc07d382  jal         func_1F4E08
    ctx->pc = 0x1F523Cu;
    SET_GPR_U32(ctx, 31, 0x1F5244u);
    ctx->pc = 0x1F5240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F523Cu;
    // 0x1f5240: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E08u, 0x1F523Cu, 0x1F5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5244u;
label_1f5244:
    // 0x1f5244: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f5244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5248: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x1F5248u;
    SET_GPR_U32(ctx, 31, 0x1F5250u);
    ctx->pc = 0x1F524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5248u;
    // 0x1f524c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x1F5248u, 0x1F5250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5250u;
label_1f5250:
    // 0x1f5250: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f5250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f5254: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1f5254u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f5258: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1f5258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f525c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1f525cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f5260: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1f5260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5264: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1f5264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5268: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5268u;
        // 0x1f526c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5270u;
}
