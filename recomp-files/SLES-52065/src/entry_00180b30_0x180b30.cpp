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

// Function: entry_00180b30
// Address: 0x180b30 - 0x180ec0
void entry_00180b30_0x180b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180b30_0x180b30");
#endif

    switch (ctx->pc) {
        case 0x180eb8u: goto label_180eb8;
        default: break;
    }

    ctx->pc = 0x180b30u;

    // 0x180b30: 0x83828684  lb          $v0, -0x797C($gp)
    ctx->pc = 0x180b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x180b34: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x180B34u;
    {
        const bool branch_taken_0x180b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B34u;
        // 0x180b38: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b34) {
            ctx->pc = 0x180EC0u;
            return;
        }
    }
    ctx->pc = 0x180B3Cu;
    // 0x180b3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x180b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x180b40: 0xac208910  sw          $zero, -0x76F0($at)
    ctx->pc = 0x180b40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936848), GPR_U32(ctx, 0));
    // 0x180b44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x180b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x180b48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180b4c: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x180b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x180b50: 0xac208914  sw          $zero, -0x76EC($at)
    ctx->pc = 0x180b50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368914u, _value); } while (0);
    // 0x180b54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x180b58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180b5c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x180b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x180b60: 0xfc2088f8  sd          $zero, -0x7708($at)
    ctx->pc = 0x180b60u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3688F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3688F8u, _value); } while (0);
    // 0x180b64: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x180b68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180b6c: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x180b6cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x180b70: 0xfc2288b0  sd          $v0, -0x7750($at)
    ctx->pc = 0x180b70u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936752), GPR_U64(ctx, 2));
    // 0x180b74: 0x2408ffcf  addiu       $t0, $zero, -0x31
    ctx->pc = 0x180b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x180b78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180b80: 0xfc2388b8  sd          $v1, -0x7748($at)
    ctx->pc = 0x180b80u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3688B8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3688B8u, _value); } while (0);
    // 0x180b84: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x180b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x180b88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180b8c: 0x64060010  daddiu      $a2, $zero, 0x10
    ctx->pc = 0x180b8cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x180b90: 0xfc228908  sd          $v0, -0x76F8($at)
    ctx->pc = 0x180b90u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936840), GPR_U64(ctx, 2));
    // 0x180b94: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x180b98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180b9c: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x180b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x180ba0: 0x902b88d0  lbu         $t3, -0x7730($at)
    ctx->pc = 0x180ba0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x3688D0u));
    // 0x180ba4: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x180ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x180ba8: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x180ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x180bac: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x180bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x180bb0: 0x240dfff9  addiu       $t5, $zero, -0x7
    ctx->pc = 0x180bb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x180bb4: 0x640e0002  daddiu      $t6, $zero, 0x2
    ctx->pc = 0x180bb4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x180bb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180bbc: 0x1725824  and         $t3, $t3, $s2
    ctx->pc = 0x180bbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 18));
    // 0x180bc0: 0x902988d1  lbu         $t1, -0x772F($at)
    ctx->pc = 0x180bc0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936785)));
    // 0x180bc4: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x180bc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x180bc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180bcc: 0x1284824  and         $t1, $t1, $t0
    ctx->pc = 0x180bccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x180bd0: 0x902f88d2  lbu         $t7, -0x772E($at)
    ctx->pc = 0x180bd0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936786)));
    // 0x180bd4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180bd8: 0x1f27824  and         $t7, $t7, $s2
    ctx->pc = 0x180bd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 18));
    // 0x180bdc: 0x902c88f0  lbu         $t4, -0x7710($at)
    ctx->pc = 0x180bdcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936816)));
    // 0x180be0: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x180be0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x180be4: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x180be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x180be8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180bec: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x180becu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x180bf0: 0xa02b88d0  sb          $t3, -0x7730($at)
    ctx->pc = 0x180bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936784), (uint8_t)GPR_U32(ctx, 11));
    // 0x180bf4: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x180bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
    // 0x180bf8: 0x1265825  or          $t3, $t1, $a2
    ctx->pc = 0x180bf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x180bfc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c00: 0x902988d0  lbu         $t1, -0x7730($at)
    ctx->pc = 0x180c00u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x3688D0u));
    // 0x180c04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c08: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x180c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x180c0c: 0xa02b88d1  sb          $t3, -0x772F($at)
    ctx->pc = 0x180c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936785), (uint8_t)GPR_U32(ctx, 11));
    // 0x180c10: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x180c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x180c14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c18: 0x459c0  sll         $t3, $a0, 7
    ctx->pc = 0x180c18u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x180c1c: 0x903288d1  lbu         $s2, -0x772F($at)
    ctx->pc = 0x180c1cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936785)));
    // 0x180c20: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x180c20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x180c24: 0x64070040  daddiu      $a3, $zero, 0x40
    ctx->pc = 0x180c24u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x180c28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c2c: 0xa02f88d2  sb          $t7, -0x772E($at)
    ctx->pc = 0x180c2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x3688D2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688D2u, _value); } while (0);
    // 0x180c30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c34: 0x902b88d2  lbu         $t3, -0x772E($at)
    ctx->pc = 0x180c34u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x3688D2u));
    // 0x180c38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c3c: 0xa02a88f0  sb          $t2, -0x7710($at)
    ctx->pc = 0x180c3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3688F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688F0u, _value); } while (0);
    // 0x180c40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c44: 0x902a88f0  lbu         $t2, -0x7710($at)
    ctx->pc = 0x180c44u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x3688F0u));
    // 0x180c48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c4c: 0xa02588d0  sb          $a1, -0x7730($at)
    ctx->pc = 0x180c4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3688D0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688D0u, _value); } while (0);
    // 0x180c50: 0x2422824  and         $a1, $s2, $v0
    ctx->pc = 0x180c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x180c54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c58: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x180c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x180c5c: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x180c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x180c60: 0xa02388d1  sb          $v1, -0x772F($at)
    ctx->pc = 0x180c60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936785), (uint8_t)GPR_U32(ctx, 3));
    // 0x180c64: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x180c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x180c68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c6c: 0x16d1824  and         $v1, $t3, $t5
    ctx->pc = 0x180c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
    // 0x180c70: 0x902988f1  lbu         $t1, -0x770F($at)
    ctx->pc = 0x180c70u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936817)));
    // 0x180c74: 0x6e5825  or          $t3, $v1, $t6
    ctx->pc = 0x180c74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x180c78: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x180c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x180c7c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x180c80: 0x45140  sll         $t2, $a0, 5
    ctx->pc = 0x180c80u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x180c84: 0x46880  sll         $t5, $a0, 2
    ctx->pc = 0x180c84u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x180c88: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x180c88u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x180c8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180c90: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x180c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x180c94: 0xa02b88d2  sb          $t3, -0x772E($at)
    ctx->pc = 0x180c94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936786), (uint8_t)GPR_U32(ctx, 11));
    // 0x180c98: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x180c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x180c9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180ca0: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x180ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x180ca4: 0xa02288f0  sb          $v0, -0x7710($at)
    ctx->pc = 0x180ca4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3688F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688F0u, _value); } while (0);
    // 0x180ca8: 0x240bfffb  addiu       $t3, $zero, -0x5
    ctx->pc = 0x180ca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x180cac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180cb0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x180cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x180cb4: 0x902f88f0  lbu         $t7, -0x7710($at)
    ctx->pc = 0x180cb4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x3688F0u));
    // 0x180cb8: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x180cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x180cbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180cc0: 0x1e21024  and         $v0, $t7, $v0
    ctx->pc = 0x180cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
    // 0x180cc4: 0xa02388f1  sb          $v1, -0x770F($at)
    ctx->pc = 0x180cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936817), (uint8_t)GPR_U32(ctx, 3));
    // 0x180cc8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x180cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x180ccc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180cd0: 0x240a7000  addiu       $t2, $zero, 0x7000
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x180cd4: 0x902e88f1  lbu         $t6, -0x770F($at)
    ctx->pc = 0x180cd4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x3688F1u));
    // 0x180cd8: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x180cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x180cdc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180ce0: 0x1cb5824  and         $t3, $t6, $t3
    ctx->pc = 0x180ce0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x180ce4: 0xa0298900  sb          $t1, -0x7700($at)
    ctx->pc = 0x180ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936832), (uint8_t)GPR_U32(ctx, 9));
    // 0x180ce8: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x180ce8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x180cec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180cf0: 0x240dfffc  addiu       $t5, $zero, -0x4
    ctx->pc = 0x180cf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x180cf4: 0xa0298901  sb          $t1, -0x76FF($at)
    ctx->pc = 0x180cf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x368901u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368901u, _value); } while (0);
    // 0x180cf8: 0x300e0003  andi        $t6, $zero, 0x3
    ctx->pc = 0x180cf8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x180cfc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d00: 0xa02288f0  sb          $v0, -0x7710($at)
    ctx->pc = 0x180d00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3688F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688F0u, _value); } while (0);
    // 0x180d04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d08: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x180d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x180d0c: 0xa0298902  sb          $t1, -0x76FE($at)
    ctx->pc = 0x180d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936834), (uint8_t)GPR_U32(ctx, 9));
    // 0x180d10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d14: 0xa0298903  sb          $t1, -0x76FD($at)
    ctx->pc = 0x180d14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x368903u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368903u, _value); } while (0);
    // 0x180d18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d1c: 0xa02988e4  sb          $t1, -0x771C($at)
    ctx->pc = 0x180d1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x3688E4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688E4u, _value); } while (0);
    // 0x180d20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d24: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x180d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180d28: 0xa02b88f1  sb          $t3, -0x770F($at)
    ctx->pc = 0x180d28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x3688F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688F1u, _value); } while (0);
    // 0x180d2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d30: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x180d30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x180d34: 0xac2c8904  sw          $t4, -0x76FC($at)
    ctx->pc = 0x180d34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936836), GPR_U32(ctx, 12));
    // 0x180d38: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x180d38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x180d3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d40: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x180d40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x180d44: 0xa42a8920  sh          $t2, -0x76E0($at)
    ctx->pc = 0x180d44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936864), (uint16_t)GPR_U32(ctx, 10));
    // 0x180d48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d4c: 0xa42a8922  sh          $t2, -0x76DE($at)
    ctx->pc = 0x180d4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368922u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368922u, _value); } while (0);
    // 0x180d50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d54: 0x352affff  ori         $t2, $t1, 0xFFFF
    ctx->pc = 0x180d54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x180d58: 0xac2c8930  sw          $t4, -0x76D0($at)
    ctx->pc = 0x180d58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368930u, _value); } while (0);
    // 0x180d5c: 0x14b4825  or          $t1, $t2, $t3
    ctx->pc = 0x180d5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x180d60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d64: 0xac2c8934  sw          $t4, -0x76CC($at)
    ctx->pc = 0x180d64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368934u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368934u, _value); } while (0);
    // 0x180d68: 0x712a7b89  pcpyld      $t7, $t1, $t2
    ctx->pc = 0x180d68u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x180d6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d70: 0x34099000  ori         $t1, $zero, 0x9000
    ctx->pc = 0x180d70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x180d74: 0x903288f0  lbu         $s2, -0x7710($at)
    ctx->pc = 0x180d74u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)FAST_READ8(0x3688F0u));
    // 0x180d78: 0x640c0008  daddiu      $t4, $zero, 0x8
    ctx->pc = 0x180d78u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x180d7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d80: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x180d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x180d84: 0xdc2b8920  ld          $t3, -0x76E0($at)
    ctx->pc = 0x180d84u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 1), 4294936864)));
    // 0x180d88: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x180d88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x180d8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180d90: 0x16f2824  and         $a1, $t3, $t7
    ctx->pc = 0x180d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x180d94: 0xa4298940  sh          $t1, -0x76C0($at)
    ctx->pc = 0x180d94u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936896), (uint16_t)GPR_U32(ctx, 9));
    // 0x180d98: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x180d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x180d9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180da0: 0x240bfff3  addiu       $t3, $zero, -0xD
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x180da4: 0xa4298942  sh          $t1, -0x76BE($at)
    ctx->pc = 0x180da4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x368942u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368942u, _value); } while (0);
    // 0x180da8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180dac: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x180dacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180db0: 0xdc2a8940  ld          $t2, -0x76C0($at)
    ctx->pc = 0x180db0u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x368940u));
    // 0x180db4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180db8: 0xfc298918  sd          $t1, -0x76E8($at)
    ctx->pc = 0x180db8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 9)); ps2TraceGuestWrite(rdram, 0x368918u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368918u, _value); } while (0);
    // 0x180dbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180dc0: 0xfc298938  sd          $t1, -0x76C8($at)
    ctx->pc = 0x180dc0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 9)); ps2TraceGuestWrite(rdram, 0x368938u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368938u, _value); } while (0);
    // 0x180dc4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180dc8: 0x2409ff3f  addiu       $t1, $zero, -0xC1
    ctx->pc = 0x180dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x180dcc: 0xa02688f0  sb          $a2, -0x7710($at)
    ctx->pc = 0x180dccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3688F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688F0u, _value); } while (0);
    // 0x180dd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180dd4: 0xfc258920  sd          $a1, -0x76E0($at)
    ctx->pc = 0x180dd4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368920u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368920u, _value); } while (0);
    // 0x180dd8: 0x14f2824  and         $a1, $t2, $t7
    ctx->pc = 0x180dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & GPR_U64(ctx, 15));
    // 0x180ddc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180de0: 0x902f88f0  lbu         $t7, -0x7710($at)
    ctx->pc = 0x180de0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x3688F0u));
    // 0x180de4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x180de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x180de8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x180de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180dec: 0xe5100  sll         $t2, $t6, 4
    ctx->pc = 0x180decu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x180df0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180df4: 0x902688e0  lbu         $a2, -0x7720($at)
    ctx->pc = 0x180df4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x3688E0u));
    // 0x180df8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180dfc: 0xfc228940  sd          $v0, -0x76C0($at)
    ctx->pc = 0x180dfcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368940u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368940u, _value); } while (0);
    // 0x180e00: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x180e04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e08: 0xfc2288c8  sd          $v0, -0x7738($at)
    ctx->pc = 0x180e08u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3688C8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3688C8u, _value); } while (0);
    // 0x180e0c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x180e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x180e10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e14: 0xfc2288d8  sd          $v0, -0x7728($at)
    ctx->pc = 0x180e14u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3688D8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3688D8u, _value); } while (0);
    // 0x180e18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e1c: 0x1e31024  and         $v0, $t7, $v1
    ctx->pc = 0x180e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
    // 0x180e20: 0xfc258928  sd          $a1, -0x76D8($at)
    ctx->pc = 0x180e20u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936872), GPR_U64(ctx, 5));
    // 0x180e24: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x180e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x180e28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e2c: 0xcd1024  and         $v0, $a2, $t5
    ctx->pc = 0x180e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 13));
    // 0x180e30: 0xa02388f0  sb          $v1, -0x7710($at)
    ctx->pc = 0x180e30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936816), (uint8_t)GPR_U32(ctx, 3));
    // 0x180e34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x180e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x180e38: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x180e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x180e3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e40: 0xa02288e0  sb          $v0, -0x7720($at)
    ctx->pc = 0x180e40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3688E0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688E0u, _value); } while (0);
    // 0x180e44: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x180e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x180e48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e4c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x180e50: 0xfc258948  sd          $a1, -0x76B8($at)
    ctx->pc = 0x180e50u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368948u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368948u, _value); } while (0);
    // 0x180e54: 0x248488b0  addiu       $a0, $a0, -0x7750
    ctx->pc = 0x180e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936752));
    // 0x180e58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e5c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x180e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x180e60: 0xfc2288e8  sd          $v0, -0x7718($at)
    ctx->pc = 0x180e60u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3688E8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3688E8u, _value); } while (0);
    // 0x180e64: 0x24a51400  addiu       $a1, $a1, 0x1400
    ctx->pc = 0x180e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5120));
    // 0x180e68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e6c: 0x24c688a0  addiu       $a2, $a2, -0x7760
    ctx->pc = 0x180e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936736));
    // 0x180e70: 0x902288e0  lbu         $v0, -0x7720($at)
    ctx->pc = 0x180e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3688E0u));
    // 0x180e74: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x180e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x180e78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e7c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x180e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x180e80: 0xa02288e0  sb          $v0, -0x7720($at)
    ctx->pc = 0x180e80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3688E0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688E0u, _value); } while (0);
    // 0x180e84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e88: 0x902288e0  lbu         $v0, -0x7720($at)
    ctx->pc = 0x180e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3688E0u));
    // 0x180e8c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x180e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x180e90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180e94: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x180e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x180e98: 0xa02288e0  sb          $v0, -0x7720($at)
    ctx->pc = 0x180e98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3688E0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3688E0u, _value); } while (0);
    // 0x180e9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180ea0: 0x902288e0  lbu         $v0, -0x7720($at)
    ctx->pc = 0x180ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3688E0u));
    // 0x180ea4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x180ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x180ea8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180eac: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x180eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x180eb0: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x180EB0u;
    SET_GPR_U32(ctx, 31, 0x180EB8u);
    ctx->pc = 0x180EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EB0u;
    // 0x180eb4: 0xa02288e0  sb          $v0, -0x7720($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936800), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x180EB0u, 0x180EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180EB8u;
label_180eb8:
    // 0x180eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180ebc: 0xa3828684  sb          $v0, -0x797C($gp)
    ctx->pc = 0x180ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936196), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x180ec0u;
}
