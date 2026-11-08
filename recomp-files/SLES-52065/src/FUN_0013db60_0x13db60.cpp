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

// Function: FUN_0013db60
// Address: 0x13db60 - 0x13dbbc
void FUN_0013db60_0x13db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013db60_0x13db60");
#endif

    switch (ctx->pc) {
        case 0x13db60u: goto label_13db60;
        case 0x13db64u: goto label_13db64;
        case 0x13db68u: goto label_13db68;
        case 0x13db6cu: goto label_13db6c;
        case 0x13db70u: goto label_13db70;
        case 0x13db74u: goto label_13db74;
        case 0x13db78u: goto label_13db78;
        case 0x13db7cu: goto label_13db7c;
        case 0x13db80u: goto label_13db80;
        case 0x13db84u: goto label_13db84;
        case 0x13db88u: goto label_13db88;
        case 0x13db8cu: goto label_13db8c;
        case 0x13db90u: goto label_13db90;
        case 0x13db94u: goto label_13db94;
        case 0x13db98u: goto label_13db98;
        case 0x13db9cu: goto label_13db9c;
        case 0x13dba0u: goto label_13dba0;
        case 0x13dba4u: goto label_13dba4;
        case 0x13dba8u: goto label_13dba8;
        case 0x13dbacu: goto label_13dbac;
        case 0x13dbb0u: goto label_13dbb0;
        case 0x13dbb4u: goto label_13dbb4;
        case 0x13dbb8u: goto label_13dbb8;
        default: break;
    }

    ctx->pc = 0x13db60u;

label_13db60:
    // 0x13db60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13db64:
    // 0x13db64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13db68:
    // 0x13db68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13db68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13db6c:
    // 0x13db6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13db6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_13db70:
    // 0x13db70: 0x9085018a  lbu         $a1, 0x18A($a0)
    ctx->pc = 0x13db70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13db74:
    // 0x13db74: 0x14a3000c  bne         $a1, $v1, . + 4 + (0xC << 2)
label_13db78:
    if (ctx->pc == 0x13DB78u) {
        ctx->pc = 0x13DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB74u;
        // 0x13db78: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DB7Cu;
        goto label_13db7c;
    }
    ctx->pc = 0x13DB74u;
    {
        const bool branch_taken_0x13db74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x13DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB74u;
        // 0x13db78: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db74) {
            ctx->pc = 0x13DBA8u;
            goto label_13dba8;
        }
    }
    ctx->pc = 0x13DB7Cu;
label_13db7c:
    // 0x13db7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13db7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13db80:
    // 0x13db80: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13db80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13db84:
    // 0x13db84: 0x320f809  jalr        $t9
label_13db88:
    if (ctx->pc == 0x13DB88u) {
        ctx->pc = 0x13DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB84u;
        // 0x13db88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DB8Cu;
        goto label_13db8c;
    }
    ctx->pc = 0x13DB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DB8Cu);
        ctx->pc = 0x13DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB84u;
        // 0x13db88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB84u, 0x13DB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DB8Cu;
label_13db8c:
    // 0x13db8c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13db8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13db90:
    // 0x13db90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13db90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13db94:
    // 0x13db94: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x13db94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_13db98:
    // 0x13db98: 0x320f809  jalr        $t9
label_13db9c:
    if (ctx->pc == 0x13DB9Cu) {
        ctx->pc = 0x13DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB98u;
        // 0x13db9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBA0u;
        goto label_13dba0;
    }
    ctx->pc = 0x13DB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DBA0u);
        ctx->pc = 0x13DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB98u;
        // 0x13db9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB98u, 0x13DBA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DBA0u;
label_13dba0:
    // 0x13dba0: 0x10000003  b           . + 4 + (0x3 << 2)
label_13dba4:
    if (ctx->pc == 0x13DBA4u) {
        ctx->pc = 0x13DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBA0u;
        // 0x13dba4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBA8u;
        goto label_13dba8;
    }
    ctx->pc = 0x13DBA0u;
    {
        const bool branch_taken_0x13dba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBA0u;
        // 0x13dba4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dba0) {
            ctx->pc = 0x13DBB0u;
            goto label_13dbb0;
        }
    }
    ctx->pc = 0x13DBA8u;
label_13dba8:
    // 0x13dba8: 0xe49400bc  swc1        $f20, 0xBC($a0)
    ctx->pc = 0x13dba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
label_13dbac:
    // 0x13dbac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13dbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13dbb0:
    // 0x13dbb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13dbb4:
    // 0x13dbb4: 0x3e00008  jr          $ra
label_13dbb8:
    if (ctx->pc == 0x13DBB8u) {
        ctx->pc = 0x13DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBB4u;
        // 0x13dbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBBCu;
        goto label_fallthrough_0x13dbb4;
    }
    ctx->pc = 0x13DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBB4u;
        // 0x13dbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13dbb4:
    ctx->pc = 0x13DBBCu;
}
