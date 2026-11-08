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

// Function: FUN_0010f4a0
// Address: 0x10f4a0 - 0x10f5bc
void FUN_0010f4a0_0x10f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f4a0_0x10f4a0");
#endif

    switch (ctx->pc) {
        case 0x10f4f0u: goto label_10f4f0;
        case 0x10f5acu: goto label_10f5ac;
        default: break;
    }

    ctx->pc = 0x10f4a0u;

    // 0x10f4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f4a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10f4ac: 0x90850224  lbu         $a1, 0x224($a0)
    ctx->pc = 0x10f4acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x10f4b0: 0x51e7c  dsll32      $v1, $a1, 25
    ctx->pc = 0x10f4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 25));
    // 0x10f4b4: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10f4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10f4b8: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x10F4B8u;
    {
        const bool branch_taken_0x10f4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4B8u;
        // 0x10f4bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4b8) {
            ctx->pc = 0x10F5ACu;
            goto label_10f5ac;
        }
    }
    ctx->pc = 0x10F4C0u;
    // 0x10f4c0: 0x92030225  lbu         $v1, 0x225($s0)
    ctx->pc = 0x10f4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 549)));
    // 0x10f4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f4c8: 0x31fbc  dsll32      $v1, $v1, 30
    ctx->pc = 0x10f4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 30));
    // 0x10f4cc: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10f4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10f4d0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F4D0u;
    {
        const bool branch_taken_0x10f4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4D0u;
        // 0x10f4d4: 0x5163c  dsll32      $v0, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4d0) {
            ctx->pc = 0x10F4E4u;
            goto label_10f4e4;
        }
    }
    ctx->pc = 0x10F4D8u;
    // 0x10f4d8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10f4dc: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x10F4DCu;
    {
        const bool branch_taken_0x10f4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4DCu;
        // 0x10f4e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4dc) {
            ctx->pc = 0x10F5A4u;
            goto label_10f5a4;
        }
    }
    ctx->pc = 0x10F4E4u;
label_10f4e4:
    // 0x10f4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4e8: 0xc042118  jal         func_108460
    ctx->pc = 0x10F4E8u;
    SET_GPR_U32(ctx, 31, 0x10F4F0u);
    ctx->pc = 0x10F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4E8u;
    // 0x10f4ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10F4E8u, 0x10F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4F0u;
label_10f4f0:
    // 0x10f4f0: 0x92050224  lbu         $a1, 0x224($s0)
    ctx->pc = 0x10f4f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f4f4: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x10f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x10f4f8: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x10f4f8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x10f4fc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f500: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f504: 0xa2030224  sb          $v1, 0x224($s0)
    ctx->pc = 0x10f504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
    // 0x10f508: 0x92050224  lbu         $a1, 0x224($s0)
    ctx->pc = 0x10f508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f50c: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x10f50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x10f510: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F510u;
    {
        const bool branch_taken_0x10f510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F510u;
        // 0x10f514: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f510) {
            ctx->pc = 0x10F52Cu;
            goto label_10f52c;
        }
    }
    ctx->pc = 0x10F518u;
    // 0x10f518: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x10f518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f51c: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x10f51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x10f520: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f524: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f528: 0xa2030224  sb          $v1, 0x224($s0)
    ctx->pc = 0x10f528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
label_10f52c:
    // 0x10f52c: 0x92030225  lbu         $v1, 0x225($s0)
    ctx->pc = 0x10f52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 549)));
    // 0x10f530: 0x31fbc  dsll32      $v1, $v1, 30
    ctx->pc = 0x10f530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 30));
    // 0x10f534: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10f534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10f538: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F538u;
    {
        const bool branch_taken_0x10f538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f538) {
            ctx->pc = 0x10F558u;
            goto label_10f558;
        }
    }
    ctx->pc = 0x10F540u;
    // 0x10f540: 0x92050224  lbu         $a1, 0x224($s0)
    ctx->pc = 0x10f540u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f544: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x10f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f548: 0x30040007  andi        $a0, $zero, 0x7
    ctx->pc = 0x10f548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x10f54c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f550: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f554: 0xa2030224  sb          $v1, 0x224($s0)
    ctx->pc = 0x10f554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
label_10f558:
    // 0x10f558: 0x92050224  lbu         $a1, 0x224($s0)
    ctx->pc = 0x10f558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f55c: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x10f55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x10f560: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x10F560u;
    {
        const bool branch_taken_0x10f560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F560u;
        // 0x10f564: 0x51ebc  dsll32      $v1, $a1, 26 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f560) {
            ctx->pc = 0x10F5ACu;
            goto label_10f5ac;
        }
    }
    ctx->pc = 0x10F568u;
    // 0x10f568: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10f568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10f56c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F56Cu;
    {
        const bool branch_taken_0x10f56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f56c) {
            ctx->pc = 0x10F58Cu;
            goto label_10f58c;
        }
    }
    ctx->pc = 0x10F574u;
    // 0x10f574: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x10f574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x10f578: 0x64040008  daddiu      $a0, $zero, 0x8
    ctx->pc = 0x10f578u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x10f57c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f580: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f584: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10F584u;
    {
        const bool branch_taken_0x10f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F584u;
        // 0x10f588: 0xa2030224  sb          $v1, 0x224($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f584) {
            ctx->pc = 0x10F5ACu;
            goto label_10f5ac;
        }
    }
    ctx->pc = 0x10F58Cu;
label_10f58c:
    // 0x10f58c: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x10f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f590: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x10f590u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x10f594: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f598: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f59c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F59Cu;
    {
        const bool branch_taken_0x10f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F59Cu;
        // 0x10f5a0: 0xa2030224  sb          $v1, 0x224($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f59c) {
            ctx->pc = 0x10F5ACu;
            goto label_10f5ac;
        }
    }
    ctx->pc = 0x10F5A4u;
label_10f5a4:
    // 0x10f5a4: 0xc042118  jal         func_108460
    ctx->pc = 0x10F5A4u;
    SET_GPR_U32(ctx, 31, 0x10F5ACu);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10F5A4u, 0x10F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5ACu;
label_10f5ac:
    // 0x10f5ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f5b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5B4u;
        // 0x10f5b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F5BCu;
}
